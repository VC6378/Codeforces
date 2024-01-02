#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count = 0;
        if(arr[0]!=arr[1]){
            count++;
        }
        int i = 1;
        // while(i<n-1){
        //     if(arr[i]!=arr[i+1]){
        //         count++;
        //         i+=2;
        //     }
        //     else{
        //         i+=1;
        //     }
        // }
        for(int i=1; i<n-1; i++){
            if((arr[i]!=arr[i+1]) || (arr[i]!=arr[i-1])){
                count++;
            }
        }
        if(arr[n-2]!=arr[n-1]){
            count++;
        }

        cout<<count<<endl;
    }
    fastio()
    return 0;
}