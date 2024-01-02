#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n-->0){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
    fastio()
    return 0;
}