#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int mod = 1e9+7;

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<long long> vec(n);
        map<long long,long long> mp;
        for(long long i=0; i<n; i++){
            cin>>vec[i];
            mp[vec[i]]++;
        }
        long long ans=0;
        long long curr=0;
        long long x=1;
        if(mp.find(1)!=mp.end()){
            ans=(ans+mp[1])%mod;
            x=(mp[1])%mod;
            curr=1;
        }

        

        for(long long i=0; i<mp.size(); i++){
            if(curr){
                if(mp.find(curr+1)!=mp.end()){
                    x=((x)%mod*(mp[curr+1])%mod)%mod;
                    ans=((ans)%mod+(x)%mod)%mod;
                    curr++;
                }
                // cout<<endl;
                else{
                    break;
                }
            }
            else{
                break;
            }
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}