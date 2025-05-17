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
        vector<long long> perm(n);
        for(long long i=0;i<n;i++){
            cin>>perm[i];
        }
        long long mn = n+1;
        long long mnWin = n+1;
        long long ans =0;
        for(long long i=0;i<n;i++){
            long long x = perm[i];
            if(x>mn && x<mnWin){
                ans++;
                mnWin = x;
            }
            mn = min(mn,x);
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}