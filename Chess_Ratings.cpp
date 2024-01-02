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
        if(x==y){
            cout<<0<<endl;
        }
        else if((y-x<=8) && (y-x!=0)){
            cout<<1<<endl;
        }
        else if((y-x>8) && ((y-x)%8==0)){
            cout<<((y-x)/8)<<endl;
        }
        else if((y-x>8) && ((y-x)%8!=0)){
            cout<<((y-x)/8)+1<<endl;
        }
    }
    return 0;
}