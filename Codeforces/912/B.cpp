#include<iostream>

using namespace std;

int main(){
	
	long long n,k,p = 0;cin>>n>>k;
	long long n1 = n;
	while(n1){n1 >>= 1; ++p; }
	cout<<((k == 1) ? n : (((long long)1<<p) - (long long)1));
	return 0;

}
