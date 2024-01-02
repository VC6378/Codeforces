#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> arr;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
        mp[arr[i]]=i+1;
    }
    if(mp.size()<3){
        cout<<(-1)<<" "<<(-1)<<" "<<(-1)<<endl;
    }
    else{
        vector<int> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    }
    fastio()
    return 0;
}