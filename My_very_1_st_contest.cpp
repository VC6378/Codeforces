#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int n,a,b;
    cin>>n>>a>>b;
    cout<<(n-a)<<" "<<(n-(a+b))<<endl;
    return 0;
}