#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        long long int x1,x2;
        cin>>x1>>x2;
        if(x1==x2){
            cout<<"YES"<<endl;
        }
        else if(x1>x2){
            if(x1>x1-x2-1){
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}