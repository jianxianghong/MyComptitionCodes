#include<iostream>

using namespace std;

int main(){

	int n,c[1010] = {0},p[1010]={0}; cin>>n;
	bool leaf[1010]; leaf[1] = leaf[0] = true;
	for(int i = 2; i < n + 10; ++i) leaf[i] = false;
	
	for(int i = 2; i <= n; ++i){
		cin>>p[i]; leaf[p[i]] = true;
	}
	
	for(int i = 2; i <= n; ++i)
		if(!leaf[i]) ++c[p[i]];
	
	for(int i = 1; i <= n; ++i){
		if(!leaf[0]) break;
		else if(leaf[i] && c[i] < 3){
			leaf[0] = false;
			//cout<<i<<' ';
			break;
		}
	}
		
	//for(int i = 0; i < n + 10; ++i) cout<<(leaf[i] ? "Yes " : "No ");
	//for(int i = 0; i < n + 10; ++i) cout<<c[i]<<' ';
	//for(int i = 0; i < n + 10; ++i) cout<<p[i]<<' ';
	
	cout<<(leaf[0] ? "Yes" : "No");

	return 0;

}
