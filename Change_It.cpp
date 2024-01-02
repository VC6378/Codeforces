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

        int cntmax = -1;
        for(int i=0; i<n; i++){
            if((count(arr,arr+n,arr[i]))>cntmax){
                cntmax = count(arr,arr+n,arr[i]);
            }

        }
        cout<<n-cntmax<<endl;
    }
    fastio()
    return 0;
}