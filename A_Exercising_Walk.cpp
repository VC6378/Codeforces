#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        x += -a+b;
        y += -c+d;
        if(x>=x1 && x<=x2 && y>=y1 && y<=y2 && (x2>x1 || a+b==0) && (y2>y1 || c+d==0)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    fastio()
    return 0;
}