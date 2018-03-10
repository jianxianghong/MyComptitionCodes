#include<iostream>

using namespace std;

int bailian_4148(){
    int p,e,i,d,s=0;
    while(cin>>p>>e>>i>>d){
        if(p!=-1){
            p=p%23;
            e=e%28;
            i=i%33;
            int ans;
            if(d%33>i) ans=((d/33)+1)*33+i;
            else ans=(d/33)*33+i;
            if(!ans) ans=33;
            while((ans%23!=p)||(ans%28!=e)) ans+=33;
            cout<<"Case "<<++s<<": the next triple peak occurs in "<<ans-d<<" days."<<endl;
        }
        else break;
    }
    return 0;
}