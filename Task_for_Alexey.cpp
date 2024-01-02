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
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }
        // sort(arr,arr+n);
        long long int ans = arr[0]*arr[1];
        long long int g;
        long long int pro;
        for(long long int i=0; i<n-1; i++){
            for(long long int j=i+1; j<n; j++){
                g = __gcd(arr[i],arr[j]);
                pro = arr[i]*arr[j];
                long long int lcm = pro/g;
                if(ans>lcm){
                    ans = lcm;
                }
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}