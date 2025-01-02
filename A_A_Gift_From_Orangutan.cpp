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
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }

        cout<<(maxi-mini)*(n-1)<<endl;
        
    }
    fastio()
    return 0;
}