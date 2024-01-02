#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;
        float petrol = float((float(n/a))*x);
        float diesel = float((float(n/b))*y);
        if(petrol>diesel){
            cout<<"DIESEL"<<endl;
        }
        else if(diesel>petrol){
            cout<<"PETROL"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }
    }
    fastio()
    return 0;
}