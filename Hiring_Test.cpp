#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        int x,y;
        cin>>x>>y;
        while(n-->0){
            int cntf=0;
            int cntp=0;
            string s;
            cin>>s;
            for(int i=0; i<m; i++){
                if(s[i]=='F'){
                    cntf++;
                }
                else if(s[i]=='P'){
                    cntp++;
                }
            }

            if((cntf>=x) || ((cntf>=(x-1)) && (cntp>=y))){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    fastio()
    return 0;
}