#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n,m;
    cin>>n>>m;
    long long int arr[m];
    for(long long int i=0; i<m; i++){
        cin>>arr[i];
    }
    long long int cnt=0;
    cnt+=arr[0]-1;
    for(long long int i=0; i<m-1; i++){
        if(arr[i]<=arr[i+1]){
            cnt+=(arr[i+1]-arr[i]);
        }
        else{
            cnt+=(n-arr[i]+arr[i+1]);
        }
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}