#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        float x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        float car1 = y1/x1;
        float car2 = y2/x2;

        if(car1>car2){
            cout<<1<<endl;
        }
        else if(car2>car1){
            cout<<(-1)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    fastio()
    return 0;
}