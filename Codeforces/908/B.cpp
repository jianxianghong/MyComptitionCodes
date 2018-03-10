#include<iostream>
#include<string.h>
#include<cstring>

using std::cin;
using std::cout;
using std::string;

int n,m,mapp[8]={0},move[16]={-1,0,1,0,0,-1,0,1};
char map[128][128];
string s;

bool test(int x,int y){

	/*if(map[x][y] != 'S'){
		if(map[y][x] != 'S')
			return false;
		else{
			x += y; y = x - y; x -=y;
		}
	}*/
	
	int len = s.length();
	for(int i = 0; i < len; ++i){
		x += move[mapp[s[i] - '0']];
		y += move[mapp[s[i] - '0'] + 4];
		
		if( x < 0 || y < 0 || x >= n || y >= m || map[x][y] == '#') return false;
		else if(map[x][y] == 'E'){
			//cout<<x<<' '<<y<<'\n';
			return true;
		} 
	}
	
	return false;
}

int main(){

	cin>>n>>m;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			cin>>map[i][j];
	cin>>s;
	
	int x=n,y=m;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			if(map[i][j] == 'S'){
				x = i; y = j;
			}
	
	if(x == n || y == m) return 0;
	
	int ans = 0;
	bool mapper[8];
	for(int i = 0; i < 10; ++i) mapper[i] = true;
	for(int i = 0; i < 4 ; ++i)
		if(mapper[i]){
			mapp[0] = i;
			mapper[i] = false;
			for(int j = 0; j < 4; ++j)
				if(mapper[j]){
					mapp[1] = j;
					mapper[j] = false;
					for(int k = 0; k < 4; ++k)
						if(mapper[k]){
							mapp[2] = k;
							mapper[k] = false;
							for(int l = 0; l < 4; ++l)
								if(mapper[l]){
									mapp[3] = l;
									mapper[l] = false;
										if(test(x,y)){
											++ans;
											//cout<<mapp[0]<<' '<<mapp[1]<<' '<<mapp[2]<<' '<<mapp[3]<<'\n';
										} 
									mapper[l] = true;
								}
							mapper[k] = true;
						}
					mapper[j] = true;
				}
			mapper[i] = true;
			}
			
	cout<<ans;
	return 0;
}
