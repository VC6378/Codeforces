#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    int x=0,money=0,energy=0,y;
    cin>>n;
    // int h[n];
    for(int i=1; i<=n; i++){
        cin>>y;
        energy += x-y;
        if(energy<0){
            money+= -((x-y));
            energy=0;
        }
        x = y;
    }
    cout<<money<<endl;
    fastio()
    return 0;
}