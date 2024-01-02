#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n;
    cin>>n;
    long long int m,c;
    cin>>m>>c;
    long long int pos = 0;
    long long int neg = 0;
    while(n-->0){
        int x,y,p;
        cin>>x>>y>>p;
        if(((m*x)+c-y)>0){
            pos+=p;
        }
        else{
            neg+=p;
        }
    }
    if(neg>pos){
        cout<<neg<<endl;
    }
    else{
        cout<<pos<<endl;
    }
    fastio()
    return 0;
}