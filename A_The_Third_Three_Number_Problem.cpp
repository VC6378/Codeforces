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
            cout<<(-1)<<endl;
        }
        else{
            int a = 0;
            int b = n/2;
            int c = n/2;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    fastio()
    return 0;
}