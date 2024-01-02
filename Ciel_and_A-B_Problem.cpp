#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a,b;
    cin>>a>>b;
    if((a-b)%10==9){
        cout<<(a-b)-1<<endl;
    }
    else{
        cout<<(a-b)+1<<endl;
    }
    fastio()
    return 0;
}