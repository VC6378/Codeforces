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
        vector<pair<int,int>>vec(n*n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int x;
                cin>>x;
                vec[x].first = i;
                vec[x].second = j;
            }
        }

        int ans ;
        for(int i=1; i<n*n; i++){
            ans+=((abs(vec[i].first-vec[i-1].first)) + (abs(vec[i].second-vec[i-1].second)));
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}