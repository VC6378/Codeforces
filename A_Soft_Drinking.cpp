#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int gas = (k*l)/(n*nl);
    int lime = (c*d)/n;
    int salt = (p)/(np*n);
    int ans = min(gas,min(lime,salt));
    cout<<ans<<endl;
    fastio()
    return 0;
}