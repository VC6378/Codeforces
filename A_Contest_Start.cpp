#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x,t;
        cin>>n>>x>>t;
        int p=min(n,t/x);
        long long int ans = (p*1LL*(p-1))/2;
        ans+=p*1LL*(n-p);
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}