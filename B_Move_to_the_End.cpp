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
        vector<long long> ans;
        vector<long long> premax(n+1);
        vector<long long> presum(n+1);
        for(long long i=0;i<n;i++){
            presum[i+1] = presum[i]+a[i];
            premax[i+1] = max(premax[i],a[i]);
        }
        for(long long k=1;k<=n;k++){
            ans.push_back(premax[n-k+1]+presum[n]-presum[n-k+1]);
        }
        for(long long i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }   
        cout<<endl;
    }
    fastio()
    return 0;
}