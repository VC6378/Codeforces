#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        if(n<(2*c-a-b)){
            cout<<"NO"<<endl;
        }
        else if((n-(2*c-a-b)) % 3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}