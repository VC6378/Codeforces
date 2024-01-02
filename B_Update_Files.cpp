#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n,k;
        cin>>n>>k;
        long long int curr=1;
        long long int ans=0;
        while(curr<k){
            curr*=2;
            ans++;
        }
        if(curr<n){
            ans+=(n-curr+k-1)/k;
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}