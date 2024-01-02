#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,k;
    cin>>n>>k;
    unordered_map<int,int>mp;
    int ans = 0;
    while(k-->0){
        string s;
        cin>>s;
        if(s=="CLOSEALL"){
            mp.clear();
            ans = 0;
            cout<<ans<<endl;
        }
        else{
            int num;
            cin>>num;
            if(mp[num]==0){
                mp[num]=1;
                ans++;
            }
            else if(mp[num]==1){
                mp[num] = 0;
                ans--;
            }

            cout<<ans<<endl;
        }

    }
    fastio()
    return 0;
}