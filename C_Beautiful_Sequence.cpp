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
        long long mod = 998244353;
        vector<long long> vec(n);
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }
        vector<long long> hehe(4,0);
        hehe[0]=1;
        for(long long i=0;i<n;i++){
            long long x=vec[i];
            if(x==2){
                hehe[x] = (hehe[x]+hehe[x])%mod;
            }
            hehe[x]=(hehe[x]+hehe[x-1])%mod;
        }
        cout<<hehe[3]<<endl;
    }
    fastio()
    return 0;
}