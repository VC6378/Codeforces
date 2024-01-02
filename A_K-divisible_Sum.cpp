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
        int x =(n+k-1)/k;
        k = k*x;
        long long int ans = (k+n-1)/n;
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}