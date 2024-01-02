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
        vector<pair<int,int>> vc;
        for(int i=0; i<n; i++){
            int x,y;
            cin>>x>>y;
            vc.push_back({x,y});
        }
        sort(vc.begin(),vc.end());
        pair<int,int> curr = make_pair(0,0);
        string ans="";
        bool flag=true;
        for(int i=0; i<n; i++){
            int r = vc[i].first-curr.first;
            int u = vc[i].second-curr.second;
            if(r<0 || u<0){
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
            ans+=string(r,'R');
            ans+=string(u,'U');
            curr=vc[i];
        }

        if(flag){
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
    }
    fastio()
    return 0;
}
