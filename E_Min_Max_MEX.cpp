#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long f(vector<long long> &a){
    unordered_set<long long> s;
    for(long long i=0;i<a.size();i++){
        s.insert(a[i]);
    }
    long long mx = 0;
    while(s.find(mx)!=s.end()){
        mx++;
    }
    return mx;
}

bool check(long long x,vector<long long> &a,long long k){
    if(x==0) return true;
    long long req = x;
    vector<long long>cnt(req,0);
    long long seg= 0;
    long long curr=0;
    for(auto it:a){
        if(it<req){
            cnt[it]++;
            if(cnt[it]==1){
                curr++;
            }
        }
        if(curr== req){
            seg++;
            for(long long i=0;i<req;i++){
                cnt[i]=0;
            }
            curr=0;
        }
    }
    return seg>=k;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long mx = f(a);
        long long low = 0;
        long long high = mx;
        long long ans=0;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(check(mid,a,k)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}