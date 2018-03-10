#include <iostream>
#include <cstring>

using namespace std;

int bailian_1056(){
    string tmp;
    int code[2][10]={0};
    while(cin>>tmp)
        if(tmp[0]=='9'){
            ++code[0][0];
            bool flag=false;
            for (int i = 1; i <= code[1][0]; ++i) {
                for (int j = 1; j <= code[1][0]; ++j) {
                    if( i!=j && (code[0][i]<=code[0][j]) && (code[1][i]==(code[1][j]>>(code[0][j]-code[0][i])))) {
                            cout << "Set " << code[0][0] << " is not immediately decodable\n";
                            flag = true;
                            break;
                    }
                }
                if(flag) break;
                else continue;
            }
            if(!flag) cout<<"Set "<<code[0][0]<<" is immediately decodable\n";
            code[1][0]=0;
            for (int k = 1; k < 10; ++k) {
                code[0][k]=code[1][k]=0;
            }
        }else{
            code[0][++code[1][0]]=tmp.length();
            for (int i = 0; i < tmp.length() ; ++i) {
                if(tmp[i]-'0') code[1][code[1][0]]=(code[1][code[1][0]]<<1)|1;
                else code[1][code[1][0]]=code[1][code[1][0]]<<1;
            }
        }
    return 0;
}