#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int ans = k*((w*(w+1))/2)-n;
    // cout<<ans<<endl;
    if(ans>0){
        cout<<ans<<endl;
    }
    else{
        cout<<(0)<<endl;
    }
    fastio()
    return 0;
}