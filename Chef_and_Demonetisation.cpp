#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int s,n;
        cin>>s>>n;
        if(s<n){
            if(s%2==0){
                cout<<1<<endl;
            }
            else if(s==1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            int q = s/n;
            int r = s%n;
            if(r!=0){
                if(r==1){
                    cout<<q+1<<endl;
                }
                else if(r%2!=0){
                    cout<<q+2<<endl;
                }
                else{
                    cout<<q+1<<endl;
                }
            }
            else{
                cout<<q<<endl;
            }
        }
    }
    fastio()
    return 0;
}