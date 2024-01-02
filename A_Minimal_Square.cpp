#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        int maxi1 = max(2*a,b);
        int maxi2 = max(a,2*b);
        int side = min(maxi2,maxi1);
        cout<<side*side<<endl;
    }
    fastio()
    return 0;
}