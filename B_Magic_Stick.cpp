#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,y;
        cin>>x>>y;
        if(x==1 && y==1){
            cout<<"YES"<<endl;
        }
        else if((x==2 || x==3)&&(y<4)){
            cout<<"YES"<<endl;
        }
        else if(x>3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}