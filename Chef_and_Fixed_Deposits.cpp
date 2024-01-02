#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int suma = 0;
        for(int i=0; i<n; i++){
            suma+=arr[i];
        }
        int summ =0;
        int ans =0;
        if(suma<x){
            cout<<(-1)<<endl;
        }
        else{
            for(int i=n-1; i>=0; i--){
                summ+=arr[i];
                if(summ>=x){
                    ans = n-i;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    fastio()
    return 0;
}