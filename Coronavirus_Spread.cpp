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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int>ans;
        int c=1;
        for(int i=1; i<n; i++){
            if(arr[i]-arr[i-1]>2){
                ans.push_back(c);
                c = 1;
            }
            else{
                c+=1;
            }
        }
        ans.push_back(c);

        sort(ans.begin(),ans.end());
        cout<<ans[0]<<" "<<ans[ans.size()-1]<<endl;
    }
    fastio()
    return 0;
}