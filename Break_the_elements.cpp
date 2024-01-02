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
        long long int cntEvens = 0;
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                cntEvens++;
            }
        }
        if(cntEvens == n){
            cout<<0<<endl;
        }
        else{
            cout<<cntEvens<<endl;
        }

    }
    fastio()
    return 0;
}