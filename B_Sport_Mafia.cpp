#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
        int ans = sum-k;
        if(ans>0 && i+ans==n){
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    fastio()
    return 0;
}