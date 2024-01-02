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
        vector<int> arr(n);
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mini = min(arr[i],mini);
        }
        sort(arr.begin(),arr.end());
        // vector<pair<int,int>> ans;
        for(int i=1; i<=n/2; i++){
            cout<<arr[i]<<" "<<mini<<endl;
        }
        cout<<"hehe"<<endl;
    }
    fastio()
    return 0;
}