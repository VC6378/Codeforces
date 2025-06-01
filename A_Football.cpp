#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<string> st(n);
    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        mp[st[i]]++;
    }
    int maxi=-1;
    string ans;
    for(auto it:mp){
        if(it.second>maxi){
            maxi=it.second;
            ans=it.first;
        }
    }

    cout<<ans<<endl;    
    fastio()
    return 0;
}