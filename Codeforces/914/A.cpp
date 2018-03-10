#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a[1010]; cin>>n;
	for(int i = 0;i < n; ++i) cin>>a[i];
	
	sort(a,a + n);
	
	for(int i = n - 1; i >= 0; --i){
		int tmp = sqrt(abs(a[i]));
		if(tmp * tmp != a[i]){
			cout<<a[i];
			break;
		}
	}
	
	return 0;
}
