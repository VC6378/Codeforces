#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long getCount(long long n){
    long long ans=0;
    while(n%2==0){
        n=n/2;
        ans++;
    }

    return ans;
}

void solve(){
    long long n;
    cin>>n;
    vector<long long> vec(n);
    vector<long long> cntstore(n);
    long long x=0;
    // long long cnt=0;
    long long extra=0;
    for(long long i=0; i<n; i++){
        cin>>vec[i];
        x+=getCount(vec[i]);
        long long cnt = getCount(i+1);
        extra+=cnt;
        cntstore.push_back(cnt);
    }

    if(x>=n){
        cout<<0<<endl;
        return;
    }
    if(x+extra<n){
        cout<<(-1)<<endl;
        return;
    }

    long long ans=0;
    sort(cntstore.rbegin(),cntstore.rend());
    for(auto i:cntstore){
        ans++;
        if(x+i>=n) break;
        x+=i;
    }

    cout<<ans<<endl;

}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        solve();
    }
    fastio()
    return 0;
}