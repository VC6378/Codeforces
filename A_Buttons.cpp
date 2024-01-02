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
        a+=(c/2+c%2);
        b+=(c-(c/2+c%2));
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    fastio()
    return 0;
}