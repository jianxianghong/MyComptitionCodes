#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a[100010] = {0}; cin>>n;
	for(int i = 0; i < n; ++i){
		int tmp; cin>>tmp;
		++a[tmp];
	}
	
	for(int i = 1; i <= 100000; ++i)
		if(a[i] & 1){
			cout<<"Conan";
			return 0;
		} 
		
	cout<<"Agasa";
	
	return 0;
}
