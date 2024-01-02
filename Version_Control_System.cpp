#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m,k;
        cin>>n>>m>>k;
        int a[m];
        int b[k];
        vector<int>ans;
        for(int i=0; i<m; i++){
            cin>>a[i];
            ans.push_back(a[i]);
        }
        for(int i=0; i<k; i++){
            cin>>b[i];
            ans.push_back(b[i]);
        }
        unordered_map<int,int>mp;
        for(int i=0; i<ans.size(); i++){
            mp[ans[i]]++;
        }
        int cnt = 0;
        for(int i=0; i<ans.size(); i++){
            if(mp[ans[i]]==2){
                cnt++;
            }
        }

        cout<<cnt/2<<" "<<(n+cnt/2)-ans.size()<<endl;
        
    }
    fastio()
    return 0;
}