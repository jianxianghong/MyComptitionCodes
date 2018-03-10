#include <iostream>

using namespace std;

int bailian_1331(){
    int T; cin>>T;
    for (int i = 0; i < T; ++i) {
        string p,q,r; cin>>p>>q>>r;
        int fig=2; bool flag= true;
        for (int j = 0; j < p.length(); ++j) if((p[j]-'0')>=fig) fig=p[j]-'0'+1;
        for (int j = 0; j < q.length(); ++j) if((q[j]-'0')>=fig) fig=q[j]-'0'+1;
        for (int j = 0; j < r.length(); ++j) if((r[j]-'0')>=fig) fig=r[j]-'0'+1;
        while(fig<17){
            int trans_p=0,trans_q=0,trans_r=0;
            for (int j = 0; j < p.length(); ++j) trans_p=trans_p*fig+(p[j]-'0');
            for (int j = 0; j < q.length(); ++j) trans_q=trans_q*fig+(q[j]-'0');
            for (int j = 0; j < r.length(); ++j) trans_r=trans_r*fig+(r[j]-'0');
            if(trans_p*trans_q == trans_r){
                cout<<fig<<endl;
                flag= false; break;
            }
            else ++fig;
        }
        if(flag) cout<<0<<endl;
    }
    return 0;
}