#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        int x,y;
        cin>>x>>y;
        int atob = (500-2*x) + (1000-4*(x+y));
        int btoa = (1000-4*y) + (500-2*(x+y));
        if(atob>btoa){
            cout<<atob<<endl;
        }
        else if(btoa>atob){
            cout<<btoa<<endl;
        }
        else{
            cout<<atob<<endl;
        }
    }
    return 0;
}