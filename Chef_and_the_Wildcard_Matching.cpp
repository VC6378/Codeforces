#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string x;
        string y;
        cin>>x>>y;
        bool ans = 1;
        int s = x.size();
        for(int i=0; i<s; i++){
            if((x[i]!=y[i]) && ((x[i]!='?') && (y[i]!='?'))){
                ans = 0;
                break;
            }
        }
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    fastio()
    return 0;
}