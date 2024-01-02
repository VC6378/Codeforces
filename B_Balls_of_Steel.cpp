#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> p;
        for(int i=0; i<n; i++){
            int x,y;
            cin>>x>>y;
            p.push_back({x,y});
        }
        int ans = -1;
        for(int i=0; i<n; i++){
            int maxi = 0;
            for(int j=0; j<n; j++){
                maxi = max(maxi,(abs(p[i].first-p[j].first) + abs(p[i].second-p[j].second)));
            }
            if(maxi<=k){
                ans=1;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}