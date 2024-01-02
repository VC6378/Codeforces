#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n,m;
    cin>>n>>m;
    unordered_map<long long int,long long int> mp;
    for(int i=1; i<=m; i++){
        mp[i%5]++;
    }
    long long int ans=0;
    for(int i=1; i<=n; i++){
        ans+=mp[(5-i%5)%5];
    }
    cout<<ans<<endl;
    fastio()
    return 0;
}