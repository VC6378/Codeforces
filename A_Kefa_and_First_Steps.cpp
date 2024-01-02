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
    int cnt=0;
    int maxi=-1;
    for(int i=0; i<n-1; i++){
        if(arr[i]<=arr[i+1]){
            cnt++;
        }
        else{
            maxi = max(cnt+1,maxi);
            cnt=0;
        }
    }
    cout<<max(cnt+1,maxi)<<endl;
    fastio()
    return 0;
}