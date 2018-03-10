#include<iostream>
#include<iomanip>
#include<math.h>

using std::cin;
using std::cout;

int main(){

	int n,r; cin>>n>>r;
	double y[1024];
	for(int i = 0; i < 1024; ++i) y[i] = 0;
	
	for(int i = 0; i < n; ++i){
		
		int xi; cin>>xi;
		
		int s = xi - (2 * r), e = xi + (2 * r);
		if(s < 0) s = 0; 
		if(e > 1000) e = 1000;
		
		double py;
		if(y[xi] == 0) py = y[xi] + r;
		else py = y[xi] + (2 * r);
			
		while(s <= e){
			
			//cout<<xi<<' '<<(s - xi) * (s - xi)<<' '<<(y[s] + sqrt(4 * r * r - (s - xi) * (s - xi)))<<'\n';
			
			if(y[s] >= r && y[s] + sqrt(4 * r * r - (s - xi) * (s - xi)) > py) py = y[s] + sqrt(4 * r * r - (s - xi) * (s - xi));
			
			++s;
				
		}
			
		y[xi] = py;
		cout<<std::setprecision(15)<<y[xi];
		if(i < (n - 1)) cout<<' ';
	}
	return 0;
}
