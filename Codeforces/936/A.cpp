#include<bits/stdc++.h>

using namespace std;

int main(){

	long long k,d; 
	double ans,t,t1,v1;cin>>k>>d>>t;
	if(t < k) cout<<t;
	else{
		if( d < k ) t1 = d * (long long)((k % d) ? (k / d + 1) : (k / d));
		else t1 = d; 
	
		v1 = t1 - (t1 - k) / 2;
	
		ans = (long long)(t/v1) * t1;
	
		t -= (long long)(t/v1) * v1;
		
		cout<<setiosflags(ios::fixed);
	
		cout<<' '<<t<<' '<<t1<<' '<<v1<<' '<<ans<<endl;
		
		if(t > k) ans = ans + k + (t - k) * 2;
		else ans += t;
		//if(ans < d) cout<<d;
		//else 
		
		cout<<ans;
	}
	return 0;
	
}
