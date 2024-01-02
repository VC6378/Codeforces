#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int x,y,n;
        cin>>x>>y>>n;
        if(n-n%x+y <= n){
            cout<<n-n%x+y<<endl;
        }
        else{
            cout<<n-n%x-(x-y)<<endl;
        }
    }
    fastio()
    return 0;
}