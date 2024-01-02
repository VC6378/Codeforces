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
        vector<pair<int,int>>pp(n);
        for(int i=0; i<n; i++){
            cin>>pp[i].first;
            pp[i].second=i;
        }
        sort(pp.begin(),pp.end());
        int cnt=1;
        for(int i=1; i<n; i++){
            if(pp[i-1].second+1 != pp[i].second){
                cnt++;
            }
        }
        if(cnt<=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    fastio()
    return 0;
}