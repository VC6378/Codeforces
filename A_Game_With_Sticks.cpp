#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m;
    cin>>n>>m;
    if(n==1 || m==1){
        cout<<"Akshat"<<endl;
    }
    else{
        int mini = min(n,m);
        if(mini&1){
            cout<<"Akshat"<<endl;
        }
        else{
            cout<<"Malvika"<<endl;
        }
    }
    fastio()
    return 0;
}