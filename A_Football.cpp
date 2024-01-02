#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    unordered_map<string,int> mp;
    while(n-->0){
        string s;
        cin>>s;
        mp[s]++;
    }
    int maxFreq=-1;
    string ans="";
    for(auto x:mp){
        if(x.second>maxFreq){
            maxFreq=x.second;
            ans=x.first;
        }
    }
    cout<<ans<<endl;
    fastio()
    return 0;
}