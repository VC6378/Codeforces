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
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(1);

        for(int i=2;i<n-1;i++){
            ans.push_back(i);
        }
        ans.push_back(1);

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}