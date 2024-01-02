#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k,l;
        cin>>n>>k>>l;
        int arr[n];
        int maxx = -1;
        bool ans = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i!=n-1){
                maxx = max(arr[i],maxx);
            }
        }
        if(arr[n-1]>maxx){
            ans = 1;
        }
        else if(k<=0){
            ans = 0;
        }
        else{
            int ur = maxx-arr[n-1]+1;
            int unUsed = 0;
            if(ur%k==0){
                unUsed = ur/k;
            }
            else{
                unUsed = (ur/k)+1;
            }

            if(unUsed<l){
                ans = 1;
            }
        }

        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    fastio()
    return 0;
}