#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        if((n%2==0)||(m%2==0)){
            cout<<(n*m)/2<<endl;
        }
        else{
            cout<<((n*m)+1)/2<<endl;
        }
    }
    fastio()
    return 0;
}