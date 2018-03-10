#include<iostream>

using namespace std;

int noi_2704(){
    int n;cin>>n;
    bool map[102][102]={0};
    while(n--){
        int x,y; cin>>x>>y;
        map[x][y] = true;
        for(int x0=1;x0<=x;++x0)
            for(int y0=1;y0<=y;++y0)
                map[x0][y0] = true;
    }
    bool first = true;
    int x1 = 1 , y1 = 100;
    while(x1<101 && y1>0){
        if(map[x1][y1])
            if(map[x1+1][y1]) ++x1;
            else{
                if(first){
                    cout<<'('<<x1<<','<<y1<<')';
                    first = false;
                }else cout<<','<<'('<<x1<<','<<y1<<')';
                while(!map[x1+1][--y1]){}
            }
        else --y1;
    }
    return 0;
}
