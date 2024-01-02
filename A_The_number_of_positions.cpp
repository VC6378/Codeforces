#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int maxi = max(a+1,n-b);
    cout<<n-maxi+1<<endl;
    fastio()
    return 0;
}