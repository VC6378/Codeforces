#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        if(x%3==0){
            cout<<"YES"<<endl;
            cout<<x/3<<" "<<0<<" "<<n-(x/3)<<endl;
        }
        else{
            int c=(x/3)+1;
            int i=3-(x%3);
            if(c+i<=n){
                cout<<"YES"<<endl;
                 cout<<c<<" "<<i<<" "<<n-c-i<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    fastio()
    return 0;
}