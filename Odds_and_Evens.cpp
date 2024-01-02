#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        if(sum%2==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    fastio()
    return 0;
}