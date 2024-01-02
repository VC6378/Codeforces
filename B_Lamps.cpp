#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

static bool cmp(pair<long long,long long> &a,pair<long long,long long> &b){
    if(a.first!=b.first) return a.first<b.first;
    else return a.second>b.second;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<pair<long long,long long>> vec;
        for(long long i=0;i<n;i++){
            long long a,b;
            cin>>a>>b;
            vec.push_back({a,b});
        }
        sort(vec.begin(),vec.end(),cmp);
        long long ans=0;
        long long on=0;
        long long i=0;
        long long start=0;
        while(i<n){
            ans+=vec[i].second;
            on++;
            i++;
            long long cnt=0;
            while(start<n && vec[start].first<=on){
                if(start<i) cnt++;
                start++;
            }
            on-=cnt;
            i=max(i,start);
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}