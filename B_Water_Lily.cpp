#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int h,l;
    cin>>h>>l;
    long long int hh = h*1ll*h;
    long long int ll = l*1ll*l;
    double ans = double((ll-hh))/(2*h);
    cout<<fixed<<setprecision(13)<<ans<<endl;
    fastio()
    return 0;
}