#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        long long ans = n*(k/(n-1))+k%(n-1);
        if(k%(n-1)==0) ans--;
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}