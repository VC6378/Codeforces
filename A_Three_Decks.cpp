#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3!=0){
            cout<<"NO"<<endl;
        }
        else{
            int x = (a+b+c)/3;
            if(b<=x) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}