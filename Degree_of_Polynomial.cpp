#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
        }
        else if(arr[n-1]==0){
            cout<<(n-2)<<endl;
        }
        else{
            cout<<(n-1)<<endl;
        }
    }
    return 0;
}