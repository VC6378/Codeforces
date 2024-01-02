#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        long long arr[n];
        long long sum=0;
        for(long long i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        long long temp=0;
        long long ans=INT_MIN;
        for(long long i=0; i<n-1; i++){
            temp+=arr[i];
            sum-=arr[i];
            ans = max(ans,__gcd(temp,sum));
        }

        cout<<ans<<endl;

    }
    fastio()
    return 0;
}