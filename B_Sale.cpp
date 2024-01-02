#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt=0;
    for(int i=0; i<m; i++){
        if(arr[i]<=0){
            cnt+=(abs(arr[i]));
        }
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}