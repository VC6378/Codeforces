#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


long long dp[20][2][20];
long long solve(string &s,long long ind,long long tight,long long cnt){
    if(ind==s.size()){
        return 1;
    }
    if(dp[ind][tight][cnt]!=-1){
        return dp[ind][tight][cnt];
    }
    long long limit = tight ? s[ind]-'0' : 9; 
    long long ans = 0;
    for(long long i=0;i<=limit;i++){
        long long updateCnt = cnt+(i!=0 ? 1: 0);
        if(updateCnt<=3){
            ans+=solve(s,ind+1,tight&(i==s[ind]-'0'),updateCnt);
        }
    }
    return dp[ind][tight][cnt] = ans;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long l,r;
        cin>>l>>r;
        memset(dp,-1,sizeof(dp));
        string ri = to_string(r);
        long long rightans = solve(ri,0,1,0);
        memset(dp,-1,sizeof(dp));
        string li = to_string(l-1);
        long long leftans = solve(li,0,1,0);
        cout<<rightans-leftans<<endl;   
    }
    fastio()
    return 0;
}