#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int a,b,s;
    cin>>a>>b>>s;
    long long int shortest = abs(a)+abs(b);
    if(s<shortest){
        cout<<"No"<<endl;
    }
    else{
        if((s-shortest)%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    fastio()
    return 0;
}