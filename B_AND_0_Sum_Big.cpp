#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long mod = 1e9+7;

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        long long ans = 1;
        for(long long i=0; i<k; i++){
            ans=(ans*n)%mod;
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}