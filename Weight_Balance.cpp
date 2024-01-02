#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        long long int diff = w2-w1;
        if((diff>=(x1*m))&&((x2*m)>=diff)){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    fastio()
    return 0;
}