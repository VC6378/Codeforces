#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = a+b+c;
    ans = max(ans,a*(b+c));
    ans = max(ans,(a+b)*c);
    ans = max(ans,(a*b*c));
    cout<<ans<<endl;
    fastio()
    return 0;
}