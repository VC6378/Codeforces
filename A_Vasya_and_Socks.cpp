#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m;
    cin>>n>>m;
    cout<<n+floor((n-1)/(m-1))<<endl;
    fastio()
    return 0;
}