#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,m,k;
        cin>>n>>m>>k;
        long long int total = n*k;
        if(m==k){
            cout<<0<<endl;
        }
        else{
            cout<<(total/(k+1))<<endl;
        }
    }
    fastio()
    return 0;
}