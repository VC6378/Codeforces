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
        map<long long,long long> vertical;
        map<long long,long long> horizontal;
        map<long long,long long> diag1;
        map<long long,long long> diag2;
        for(long long i=0;i<n;i++){
            long long x,y;
            cin>>x>>y;
            vertical[x]++;
            horizontal[y]++;
            diag1[x+y]++;
            diag2[x-y]++;
        }
        long long ans = 0;
        for(auto it: vertical){
            ans += (it.second*(it.second-1));
        }
        for(auto it: horizontal){
            ans += (it.second*(it.second-1));
        }
        for(auto it: diag1){
            ans += (it.second*(it.second-1));
        }
        for(auto it: diag2){
            ans += (it.second*(it.second-1));
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}