#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    long long int ans=0;
    ans = (2ll<<n)-2;
    cout<<ans<<endl;
    fastio()
    return 0;
}