#include <bits/stdc++.h>

using namespace std;

struct node{
	int a,t,l;
	
	friend bool operator < (node a,node b){
		
		return a.a == b.a ? a.t < b.t : a.a > b.a;
		
	}
}data[200010];

bool cmp(node a , node b){
	return a.t == b.t ? a.a > b.a : a.t < b.t;
}

int main(){

	std::ios::sync_with_stdio(false);

	int n,T; cin>>n>>T;
	for(int i = 0,l0 = 1; i < n; ++i, ++l0){
		cin>>data[i].a>>data[i].t; data[i].l = l0;
		if(data[i].t > T){
			--n; --i;
		}
	}
	
	sort(data,data + n,cmp);
	
	int ans = 0;
	priority_queue<node> q;
	
	for(int i = 0; i < n && T > 0; ++i) 
		if(data[i].t <= T && ans <= data[i].a){
			q.push(data[i]); T -= data[i].t; ++ans;
			while(!q.empty() && q.top().a < ans){
				T += q.top().t; --ans; q.pop();
			}
		}
	
	cout<<ans<<endl<<ans<<endl;
	
	bool flag = false;
	
	while(!q.empty()) {
		if(flag) cout<<' ';
		else flag = true;
			
		cout<<q.top().l;
		
		q.pop();
	}
		
	return 0;
}
