#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    if(n&1){
        cout<<0<<endl;
    }
    else{
        long long int ans = pow(2,n/2);
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}