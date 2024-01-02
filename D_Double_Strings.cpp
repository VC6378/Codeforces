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
        string s[n];
        map<string,bool> mp;
        for(int i=0; i<n; i++){
            cin>>s[i];
            mp[s[i]]=true;
        }
        for(int i=0; i<n; i++){
            bool ans=false;
            for(int j=1; j<s[i].size(); j++){
                string pref = s[i].substr(0,j);
                string suffix = s[i].substr(j,s[i].size()-j);
                if(mp[pref]&&mp[suffix]){
                    ans=true;
                }
            }

            cout<<ans;
        }
        cout<<endl;

    }
    fastio()
    return 0;
}