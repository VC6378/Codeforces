#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int l,r,x;
        cin>>l>>r>>x;
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(abs(a-b)>=x){
            cout<<1<<endl;
        }
        else if(((r-max(a,b))>=x) || ((min(a,b)-l)>=x)){
            cout<<2<<endl;
        }
        else if(((r-b >= x)&&(a-l >= x)) || ((r-a >= x)&&(b-l >= x))){
            cout<<3<<endl;
        }
        else{
            cout<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}