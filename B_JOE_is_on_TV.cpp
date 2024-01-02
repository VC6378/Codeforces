#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    double ans=0;
    for(double i=1; i<=n; i++){
        ans+=1.0/i;
    }
    cout<<fixed<<setprecision(12)<<ans<<endl;
    fastio()
    return 0;
}