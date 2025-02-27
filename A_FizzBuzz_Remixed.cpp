#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int ans = (n/15)*3;
        int x = n%15;
        x++;
        x=min(3,x);
        ans+=x;
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}