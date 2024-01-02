#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    fastio()
    return 0;
}