#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        int chefto = x+(p*10);
        int chefinato = y+(q*10);
        if(chefto>chefinato){
            cout<<"Chefina"<<endl;
        }
        else if(chefinato>chefto){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    fastio()
    return 0;
}