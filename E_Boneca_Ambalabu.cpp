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
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }
        vector<long long> cnt(30,0);
        for(long long i=0;i<n;i++){
            for(long long j=0;j<30;j++){
                cnt[j]+=(vec[i]>>j)&1;  
            }
        }

        long long ans=0;
        for(long long i=0;i<n;i++){
            long long total=0;
            for(long long j=0;j<30;j++){
                long long check = vec[i]>>j&1;
                if(check) total+=(1<<j)*(n-cnt[j]);
                else total+=(1<<j)*cnt[j];
            }
            ans = max(ans,total);
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}