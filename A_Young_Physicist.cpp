#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int sumx=0,sumy=0,sumz=0;
    while(n-->0){
        int x,y,z;
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }

    if((sumx==0) && (sumy==0) && (sumz==0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}