#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans;
    if(m*a <= b){
        ans = n*a;
    }
    else{
        ans = (n/m)*b+min(((n%m)*a),b);
    }

    cout<<ans<<endl;
    fastio()
    return 0;
}