#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        int dis = abs(l);
        if(abs(r)==dis && abs(u)==dis && abs(d)==dis){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

    fastio()
    return 0;
}