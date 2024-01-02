#include <bits/stdc++.h>
using namespace std;
 
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,y;
        cin>>x>>y;
        int a,b;
        cin>>a>>b;
        long long int ans;
        if((a+a)<=(b)){
            ans = (x+y)*1ll*a;
        }
        else{
            if(x>y){
                ans=y*1ll*b + (x-y)*1ll*a;
            }
            else{
                ans=x*1ll*b+(y-x)*1ll*a;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}