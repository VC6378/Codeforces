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
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int res=arr[1];
        for(int i=2; i<=n; i++){
            res=res&arr[i];
        }
        cout<<res<<endl;
    }
    fastio()
    return 0;
}