#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long possible(vector<long long> &a,vector<long long> &b,long long n,long long k){
    long long x=-1;
    long long know = false;
    for(long long i=0;i<n;i++){
        if(b[i]!=-1){
            x = a[i]+b[i];
            know = true;
            break;
        }
    }

    if(know){
        for(long long i=0;i<n;i++){
            if(b[i]!=-1 && a[i]+b[i]!=x){
                return 0;
            }
        }

        for(long long i=0;i<n;i++){
            if(b[i]==-1){
                long long val = x-a[i];
                if(val<0 or val>k) return 0;
            }
        }

        return 1;
    }
    else{
        long long low = 0;
        long long high = 2*k;
        for(long long i=0;i<n;i++){
            if(b[i]==-1){
                low = max(low,a[i]);
                high = min(high,a[i]+k);
            }
        }

        if(low>high) return 0;
        else return (high-low+1);
    }
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        vector<long long> b(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }
        long long ans = possible(a,b,n,k);
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}