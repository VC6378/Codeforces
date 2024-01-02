#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        if(n&1){
            cout<<(n/2)+1<<endl;
        }
        else{
            cout<<(n/2)<<endl;
        }
    }
    fastio()
    return 0;
}