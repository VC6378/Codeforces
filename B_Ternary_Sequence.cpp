#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x0,x1,x2;
        cin>>x0>>x1>>x2;
        int y0,y1,y2;
        cin>>y0>>y1>>y2;
        int sum=0;
        int mini;
        mini = min(x0,y2);
        x0-=mini;
        y2-=mini;
        mini = min(x1,y0);
        x1-=mini;
        y0-=mini;
        mini = min(x2,y1);
        x2-=mini;
        y1-=mini;
        sum+=2*mini;
        mini = min(x1,y2);
        x1-=mini;
        y2-=mini;
        sum-=(2*mini);
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}