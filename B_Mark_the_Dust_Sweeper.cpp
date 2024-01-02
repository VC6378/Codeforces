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
        long long ans=0;
        int start=0;
        while(start<n && arr[start]==0){
            start++;
        }
        for(int i=start; i<n-1; i++){
            ans+=arr[i];
            if(arr[i]==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}