#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,x;
        cin>>n>>x;
        vector<long long> vec(n);
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        long long si = 0;
        long long ans=0;
        for(long long i=0;i<n;i++){
            si++;
            if(vec[i]*si>=x){
                ans++;
                si=0;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}