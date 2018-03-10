#include<iostream>

using namespace std;

int noi_8208(){
    int R; cin>>R;
    long long r[R+10]={0};
    int N; cin>>N;
    while(N--){
        int L,T,W,H; cin>>L>>T>>W>>H;
        for(int i=L;i<L+W;++i) r[i]+=H;
    }
    //for(int i=0;i<=R;++i) cout<<r[i]<<' ';
    //cout<<endl;
    long long r_l=r[0],r_r=r[R];
    int t_l=0,t_r=R;
    while(t_l<t_r){
        if(r_l>r_r)
            if(r_l>r_r+r[t_r-1]) r_r+=r[--t_r];
            else r_l+=r[++t_l];
        else r_l+=r[++t_l];
    }
    while(!r[t_l++]){if(t_l>R) break;}
    cout<<--t_l;
    return 0;
}
