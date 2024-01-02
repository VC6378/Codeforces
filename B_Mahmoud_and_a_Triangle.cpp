#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool ans=false;
    for(int i=1; i<n-1; i++){
        if(arr[i-1]+arr[i]>arr[i+1]){
            ans=true;
            break;
        }
    }

    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}