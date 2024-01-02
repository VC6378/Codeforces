#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int val[26];
    for(int i=0; i<26; i++){
        cin>>val[i];
    }
    int ans=0;
    for(int i=0; i<s.size(); i++){
        ans+=(val[s[i]-'a']*(i+1));
    }
    sort(val,val+26);
    int maxi = val[25];
    for(int i=0; i<k; i++){
        ans+=((maxi)*(s.size()+i+1));
    }
    cout<<ans<<endl;

    fastio()
    return 0;
}