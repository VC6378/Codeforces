#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        int cnt[4] = {};
        int l =0;
        int n=s.length();
        int ans = n+1;
        for(int r=0; r<n; ++r){
            int dig = s[r]-'0';
            cnt[dig]++;

            while((s[l] - '0')>1){
                cnt[s[l] - '0']--;
                l++;
            }

            if(cnt[1]&cnt[2]&cnt[3]){
                ans = min(ans,r-l+1);
            }
        }

        if(ans==n+1){
            ans=0;
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}