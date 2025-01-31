#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long f(vector<vector<long long>> &dp,vector<long long> &wt,vector<long long> &val,long long ind,long long w){
    if(ind==0){
        if(wt[0]<=w) return val[0];
        else return 0;
    }
    if(dp[ind][w]!=-1) return dp[ind][w];
    long long nottake = f(dp,wt,val,ind-1,w);
    long long take = 0;
    if(wt[ind]<=w){
        take = val[ind]+f(dp,wt,val,ind-1,w-wt[ind]);
    }
    return dp[ind][w]=max(take,nottake);
}

int32_t main()
{
    long long n,w;
    cin>>n>>w;
    vector<long long> wt(n);
    vector<long long> val(n);
    for(long long i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    vector<vector<long long>> dp(n,vector<long long>(w+1,-1));
    cout<<f(dp,wt,val,n-1,w)<<endl;
    fastio()
    return 0;
}