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
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> pref(n);
        pref[0] = (a[0]>0 ? a[0]:0);
        for(long long i=1;i<n;i++){
            pref[i] = pref[i-1];
            if(a[i]>0){
                pref[i] += a[i];
            }
        }
        vector<long long> suff(n);
        suff[n-1] = (a[n-1]<0 ? -a[n-1]:0);
        for(long long i=n-2;i>=0;i--){
            suff[i] = suff[i+1];
            if(a[i]<0){
                suff[i]+= -(a[i]);
            }
        }
        long long ans = INT_MIN;
        for(long long i=0;i<n;i++){
            ans = max(ans,pref[i]+suff[i]);
        }
        cout<<ans<<endl;

    }
    fastio()
    return 0;
}