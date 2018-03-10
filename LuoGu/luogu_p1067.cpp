#include <iostream>

using std::cin;
using std::cout;

int luogu_p1067(){
    int n; cin>>n;
    int tmp; cin>>tmp;
    if(tmp==-1) cout<<'-'; else if(tmp==1) ;else cout<<tmp;
    cout<<"x^"<<n;
    while(--n>=0){
        cin>>tmp;
        if(tmp!=0&&n!=1&&n!=0){ if(tmp==-1) cout<<'-'; else if(tmp==1) cout<<'+';else if(tmp>0) cout<<'+'<<tmp; else cout<<tmp; cout<<"x^"<<n; }
        if(n==0) if(tmp>0) cout<<'+'<<tmp; else if(tmp<0) cout<<tmp;
        if(n==1 && tmp!=0){ if(tmp==-1) cout<<'-'; else if(tmp==1) cout<<'+';else if(tmp>0) cout<<'+'<<tmp; else cout<<tmp; cout<<"x"; }
    }
    return 0;
}