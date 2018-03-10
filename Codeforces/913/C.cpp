#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;

ll a[100];

int main(){
	int n; ll L; cin>>n>>L;
	for(int i = 0; i < n; i++) cin>>a[i];
	for(int i = 1; i < n; i++) a[i] = min(a[i],a[i - 1] << 1);
	for(int i = n - 2; i >= 0; i--) a[i] = min(a[i],a[i + 1]);	
	for(int i = n; i < 31; i++) a[i] = a[i - 1] << 1;
	
	ll ans = 0;
	for(int i = 0; i < 31; i++){
		if(ans > a[i]) ans = a[i];
		if(L & (1 << i)) ans += a[i];
	}
	
	cout<<ans;
	
	return 0;
}
