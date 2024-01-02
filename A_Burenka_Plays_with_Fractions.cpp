#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int x = a*d;
        long long int y = c*b;
        if(x==y){
            cout<<0<<endl;
        }
        else if((y!=0 && x%y==0) || (x!=0 && y%x==0)){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    fastio()
    return 0;
}