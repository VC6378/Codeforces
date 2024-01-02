#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int r;
        cin>>r;
        if(r<1600){
            cout<<3<<endl;
        }
        else if((r>=1600) && (r<2000)){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    fastio()
    return 0;
}