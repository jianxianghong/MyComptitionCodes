#include<iostream>
#include<string.h>
#include<cstring>

using std::cin;
using std::cout;
using std::string;

int main(){
	string s; cin>>s;
	int ans = 0,l = s.length();
	for(int i = 0; i < l; ++i)
		if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' 
			|| s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9' )
			++ans;
	cout<<ans;
	return 0;
}
