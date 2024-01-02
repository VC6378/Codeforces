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
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        // cout<<"ha"<<endl;
        vector<int> ans(n+1);
        for(int i=0;i<n;i++){
            ans[vec[i]] = n-vec[i]+1;
        }
        
        for(int i=0;i<n;i++){
            cout<<ans[vec[i]]<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}