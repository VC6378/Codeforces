#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
   long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        if(n%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(long long int i=1; i<n/2; i+=2){
                cout<<i<<" ";
            }
            for(long long int i=((n/2)+2); i<=n; i+=2){
                cout<<i<<" ";
            }
            cout<<endl;

            for(long long int i=2; i<=n/2; i+=2){
                cout<<i<<" ";
            }
            for(long long int i=((n/2)+1); i<n; i+=2){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}