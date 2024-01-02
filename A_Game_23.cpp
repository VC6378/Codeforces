#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<(-1)<<endl;
    }
    else{
        int d = m/n;
        int ans=0;
        while(d%2==0){
            ans++;
            d=d/2;
        }
        while(d%3==0){
            ans++;
            d=d/3;
        }
        if(d!=1){
            ans = -1;
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}