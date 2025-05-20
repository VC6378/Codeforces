#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,x;
        cin>>n>>x;
        if(n==1){
            if(x==0) cout<<-1<<endl;
            else cout<<x<<endl;
        }
        else{
            long long bitx = __builtin_popcount(x);
            if(bitx>=n) cout<<x<<endl;
            else{
                long long left = n-bitx;
                long long bitTotal = x+left;
                if((left%2)){
                    if(x==0 or x==1) bitTotal+=3;
                    else{
                        bitTotal++;
                    }
                }
                cout<<bitTotal<<endl;
            }
        }
    }
    fastio()
    return 0;
}