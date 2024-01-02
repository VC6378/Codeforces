#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,n,m;
        cin>>x>>n>>m;
        int ans=x;
        bool hehe=0;
        for(int i=0; i<n; i++){
            if(ans<floor(ans/2)+10){
                break;
            }
            else{
                ans=(floor(ans/2)+10);
            }
        }
        for(int i=0; i<m; i++){
            ans=ans-10;
        }

        if(ans<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}