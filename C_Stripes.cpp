#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        char mat[8][8];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>mat[i][j];
            }
        }
        int cntR=0;
        bool ans=0;
        for(int i=0; i<8; i++){
            char fake[8];
            if(mat[i][0]=='R'){
                for(int j=0; j<8; j++){
                    if(mat[i][j]=='R'){
                        cntR++;
                    }
                }
            }
            if(cntR==8){
                ans = 1;
                break;
            }
            else{
                cntR=0;
            }
        }

        if(ans){
            cout<<"R"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    fastio()
    return 0;
}