#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        if(n<k){
            cout<<(k-n)<<endl;
        }
        else{
            if((n-k)&1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    fastio()
    return 0;
}