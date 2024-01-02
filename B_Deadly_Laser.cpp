#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        if(min(sx-1,m-sy)<=d && min(n-sx,sy-1)<=d){
            cout<<(-1)<<endl;
        }
        else{
            cout<<n+m-2<<endl;
        }
    }
    fastio()
    return 0;
}