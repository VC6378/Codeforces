#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        if(n&1){
            for(int i=0; i<n; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<1<<" ";
            cout<<3<<" ";
            for(int i=2; i<n; i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}