#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            int y;
            cin>>y;
            v.push_back({y,1});
        }
        for(int i=0; i<v.size(); i++){
            if((v[i].first%x)==0){
                v.push_back({v[i].first/x,x*v[i].second});
            }
            else{
                break;
            }
        }

        long long int ans=0;
        for(int i=0; i<v.size(); i++){
            ans+=(v[i].first*1ll*v[i].second);
        }
        cout<<ans<<endl;

    }

    fastio()
    return 0;
}