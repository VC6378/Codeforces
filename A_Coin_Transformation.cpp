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
        long long ans = 1;
        while(n>3){
            n = n/4;
            ans = ans*2;
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}