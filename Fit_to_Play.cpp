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
        int ans  = -1;
        int mn = arr[0];
        for(int i=0; i<n; i++){
            ans = max(ans,arr[i]-mn);
            mn = min(mn,arr[i]);
        }

        if(ans>0){
            cout<<ans<<endl;
        }
        else{
            cout<<"UNFIT"<<endl;
        }
    }
    fastio()
    return 0;
}