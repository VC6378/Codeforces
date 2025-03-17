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
        vector<int> ans;
        if(k&1){
            for(int i=0;i<n-2;i++){
                ans.push_back(n);
            }
            ans.push_back(n);
            ans.push_back(n-1);
        }
        else{
            for(int i=0;i<n-2;i++){
                ans.push_back(n-1);
            }
            ans.push_back(n);
            ans.push_back(n-1);
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}