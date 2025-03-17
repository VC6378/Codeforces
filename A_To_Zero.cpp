#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        if(n&1){
            cout<<1+((n-k)+k-2)/(k-1)<<endl;
        }
        else{
            cout<<(n+k-2)/(k-1)<<endl;
        }
    }
    fastio()
    return 0;
}