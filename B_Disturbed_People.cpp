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
    for(int i=1; i<n-1; i++){
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1){
            cnt++;
            arr[i+1]=0;
        }
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}