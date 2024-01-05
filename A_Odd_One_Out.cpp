#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        unordered_map<int,int> mp;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        for(auto it:mp){
            if(it.second==1) cout<<it.first<<endl;
        }
        
    }
    fastio()
    return 0;
}