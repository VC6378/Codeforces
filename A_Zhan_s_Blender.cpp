#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        long long x,y;
        cin>>x>>y;
        x=min(x,y);
        cout<<(n+x-1)/x<<endl;
    }
    fastio()
    return 0;
}