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
        long long int n;
        cin>>n;
        long long int arr[n];
        long long int count = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                continue;
            }
        }
        cout<<(n-count)<<endl;
    }
    return 0;
}