#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,x;
        cin>>n>>x;
        long long int arr[n];
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }
        bool ans = 1;
        for(long long int i=0; i<n; i++){
            if(arr[i]>arr[i+1]){
                if((arr[i]+arr[i+1])<=x){
                    swap(arr[i],arr[i+1]);
                }
                else{
                    ans=0;
                    break;
                }
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    fastio()
    return 0;
}