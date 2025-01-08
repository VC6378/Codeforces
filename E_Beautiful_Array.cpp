#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<1<<endl;
        cout<<a<<endl;
    }
    else{
        cout<<3<<endl;
        cout<<b<<" "<<b<<" "<<3*a-2*b<<endl;
    }
    fastio()
    return 0;
}