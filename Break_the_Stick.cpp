#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n,x;
        cin>>n>>x;
        if(n%2==0){
            cout<<"YES"<<endl;
        }
        else{
            if(x%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    fastio()
    return 0;
}