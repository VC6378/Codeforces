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
        string s;
        cin>>s;
        vector<int> cnt(26,0);
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }
        vector<int> temp(26,0);
        int ans = 0;
        for(auto it:s){
            cnt[it-'a']--;
            temp[it-'a']++;
            int curr=0;
            for(int i=0;i<26;i++){
                curr+=(min(1,cnt[i])+min(1,temp[i]));
            }
            ans = max(ans,curr);
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}