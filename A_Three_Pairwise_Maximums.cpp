#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,y,z;
        cin>>x>>y>>z;
        if(y!=z){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
    }
    fastio()
    return 0;
}