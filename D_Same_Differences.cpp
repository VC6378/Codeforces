#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        long long ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x=x-i;
            ans+=(mp[x]);
            mp[x]++;
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}