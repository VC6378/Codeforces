#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,n;
        cin>>a>>b>>n;
        if(a==b){
            cout<<0<<endl;
        }
        else{
            int x = a^b;
            if(x<n){
                cout<<1<<endl;
            }
            else{
               x= x^(n-1);
               if(x<n){
                cout<<2<<endl;
               } 
               else{
                cout<<(-1)<<endl;
               }
            }

        }
    }
    fastio()
    return 0;
}