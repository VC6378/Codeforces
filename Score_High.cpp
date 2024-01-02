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
        int arr[4];
        for(int i=0; i<4; i++){
            cin>>arr[i];
        }
        sort(arr,arr+4);
        cout<<(arr[3])<<endl;
    }
    return 0;
}