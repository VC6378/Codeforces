#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int l,r;
        cin>>l>>r;
        if(l*2 <= r){
            cout<<l<<" "<<l*2<<endl;
        }
        else{
            cout<<(-1)<<" "<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}