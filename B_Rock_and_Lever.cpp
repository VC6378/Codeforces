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
        vector<long long> vec(n);
        for(long long i=0; i<n; i++){
            cin>>vec[i];
        }
        // long long ans=0;
        long long b[33] = {0};
        for(long long i=0; i<n; i++){
            long long x = vec[i];
            long long cnt=0;
            while(x>0){
                x=x/2;
                cnt++;
            }
            b[cnt]++;
        }

        long long ans=0;
        for(long long i=0; i<=32; i++){
            if(b[i]>=2){
                ans+=(b[i]*(b[i]-1)/2);
            }
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}