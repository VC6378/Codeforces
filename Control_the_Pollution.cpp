#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x,y;
        cin>>n>>x>>y;
        int finalAns = min(ceil(n/100.0)*x,ceil(n/4.0)*y);
        // cout<<finalAns<<endl;
        int bus = n/100;
        int car = n%100;
        finalAns = min(finalAns,bus*x+(int)ceil(car/4.0)*y);

        cout<<finalAns<<endl;
    }
    fastio()
    return 0;
}