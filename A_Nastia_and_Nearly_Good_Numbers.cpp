#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
        }
        else{
            long long int x=a*1ll*b;
            long long int y=a;
            long long int ans=x+y;
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<ans<<endl;
        }
    }
    fastio()
    return 0;
}