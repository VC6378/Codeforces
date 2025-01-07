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
        if(a&1){
            cout<<"NO"<<endl;
        }
        else{
            if(b%2==0){
                cout<<"YES"<<endl;
            }
            else{
                if(a==0){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
        }
    }
    fastio()
    return 0;
}