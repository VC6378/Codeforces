#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int x,y;
    cin>>x>>y;
    if(x>=(2*y)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    fastio()
    return 0;
}