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
        int a=0,b=0;
        for(int i=n-1; i>=0; i--){
            if(a>b){
                b+=arr[i];
            }
            else{
                a+=arr[i];
            }
        }
        if(a>b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    fastio()
    return 0;
}