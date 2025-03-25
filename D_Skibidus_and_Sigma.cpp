#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool static cmp(pair<long long,long long> a,pair<long long,long long> b){
    return a.first>b.first;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        vector<vector<long long>> vec(n,vector<long long>(m));
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>vec[i][j];
            }
        }
        vector<pair<long long,long long>> sums(n);
        for(long long i=0;i<n;i++){
            long long total=0;
            for(long long j=0;j<m;j++){
                total+=vec[i][j];
            }
            sums[i]={total,i};
        }

        sort(sums.begin(),sums.end(),cmp);
        vector<long long> final(n*m);
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                final[i*m+j]=vec[sums[i].second][j];
            }
        }

        long long ans = 0;
        for(long long i=0;i<n*m;i++){
            ans+=final[i]*(n*m-i);
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}