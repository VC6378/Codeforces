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
        int cntones=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1){
                cntones++;
            }
            
        }

        // cout<<cntones<<endl;
        int ans=0;
        if(cntones&1){
            ans += cntones/2;
            ans += n-cntones+1;
        }
        else{
            ans+=cntones/2;
            ans+=(n-cntones);
        }

        cout<<ans<<endl;
        
    }
    fastio()
    return 0;
}