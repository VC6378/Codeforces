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
        int cnt=0;
        for(int i=0; i<n-1; i++){
            if((arr[i]%2) == (arr[i+1]%2)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
    }
    fastio()
    return 0;
}