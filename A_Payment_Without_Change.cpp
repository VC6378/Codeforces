#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int q;
    cin>>q;
    while(q-->0){
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        long long int ans = (a*1ll*n)+b;
        if(ans>=s && s%n<=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}