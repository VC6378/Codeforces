#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1!=x2 && y1!=y2 && abs(x1-x2)!=abs(y1-y2)){
        cout<<(-1)<<endl;
    }
    else if(x1==x2){
        cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x2+abs(y2-y1)<<" "<<y2<<endl;
    }
    else if(y1==y2){
        cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y2+abs(x2-x1)<<endl;
    }
    else{
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    fastio()
    return 0;
}