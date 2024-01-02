#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,m;
        cin>>n>>m;
        if(n==1 && m>2){
            cout<<"No"<<endl;
        }
        else if(m==1 && n>2){
            cout<<"No"<<endl;
        }
        else{
            if(n%2==0 || m%2==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    fastio()
    return 0;
}