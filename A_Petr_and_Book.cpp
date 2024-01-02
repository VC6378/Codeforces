#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int mon,tue,wed,thurs,fri,sat,sun;
    cin>>mon>>tue>>wed>>thurs>>fri>>sat>>sun;
    while(n>=0){
        n-=mon;
        if(n<=0){
            cout<<1<<endl;
            break;
        }
        n-=tue;
        if(n<=0){
            cout<<2<<endl;
            break;
        }
        n-=wed;
        if(n<=0){
            cout<<3<<endl;
            break;
        }
        n-=thurs;
        if(n<=0){
            cout<<4<<endl;
            break;
        }
        n-=fri;
        if(n<=0){
            cout<<5<<endl;
            break;
        }
        n-=sat;
        if(n<=0){
            cout<<6<<endl;
            break;
        }
        n-=sun;
        if(n<=0){
            cout<<7<<endl;
            break;
        }
    }
    fastio()
    return 0;
}