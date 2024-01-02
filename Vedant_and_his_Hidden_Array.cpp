#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,a;
        cin>>n>>a;
        if(a&1){
            if(n&1){
                cout<<"Odd"<<endl;
            }
            else{
                cout<<"Even"<<endl;
            }
        }
        else{
            if(n==1){
                cout<<"Even"<<endl;
            }
            else{
                cout<<"Impossible"<<endl;
            }
        }
    }
    fastio()
    return 0;
}