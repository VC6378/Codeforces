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
        long long n1=1e9+7;
        long long ans = ((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}