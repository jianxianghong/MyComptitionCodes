#include<iostream>

using namespace std;

int main(){

	long long a,b,x,y,z,ans=0; cin>>a>>b>>x>>y>>z;
	long long ye = x * 2 + y,bl = y + z * 3;
	
	if(a < ye) ans += (ye -a);
	if(b < bl) ans += (bl -b);
	
	cout<<ans;

	return 0;

}
