#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m;
    cin>>n>>m;
    vector<int> spfriend(n);
    unordered_map<int,bool> mp;
    for(int i=0; i<n; i++){
        cin>>spfriend[i];
        mp[spfriend[i]]=true;
    }
    vector<pair<int,string>> special;
    vector<pair<int,string>> unspecial;
    while(m-->0){
        int f,p;
        string s;
        cin>>f>>p>>s;
        if(mp[f]){
            special.push_back({p,s});
        }
        else{
            unspecial.push_back({p,s});
        }
    }

    sort(special.begin(),special.end());
    reverse(special.begin(),special.end());
    sort(unspecial.begin(),unspecial.end());
    reverse(unspecial.begin(),unspecial.end());

    for(auto x :special){
        cout<<x.second<<endl;
    }

    for(auto x:unspecial){
        cout<<x.second<<endl;
    }

    fastio()
    return 0;
}