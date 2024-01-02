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
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }

        int g=360;
        for(int i=0; i<n-1; i++){
            g = __gcd((arr[i+1]-arr[i]),g);
        }
        cout<<g<<endl;
        // cout<<(360/g)<<endl;
    }
    fastio()
    return 0;
}