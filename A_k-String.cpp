#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    unordered_map<char,int> mp;
    int n = s.size();
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    bool flag=true;
    for(auto x:mp){
        if(x.second%k!=0){
            flag=false;
            break;
        }
    }

    if(!flag){
        cout<<(-1)<<endl;
    }
    else{
        for(int i=0; i<k; i++){
            for(int j=0; j<s.size(); j+=k){
                cout<<s[j];
            }
        }
        cout<<endl;

    }
    fastio()
    return 0;
}