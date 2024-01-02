#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int d;
    cin>>d;
    if(d&1){
        cout<<(-1)<<endl;
    }
    else{
        cout<<d/2<<" "<<0<<endl;
        cout<<0<<" "<<d/2<<endl;
        cout<<-(d/2)<<" "<<0<<endl;
        cout<<0<<" "<<-(d/2)<<endl;
    }
    fastio()
    return 0;
}