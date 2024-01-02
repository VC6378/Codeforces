#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,m;
        cin>>n>>m;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<long long int>());
        // int j;
        long long int total = 0;
        long long int ans;
        for(int j=0; j<n; j++){
            total+=arr[j];

            if(total>=m){
                ans = j;
                break;
            }
        }

        if(total>=m){
            cout<<(ans+1)<<endl;
        }
        else{
            cout<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}