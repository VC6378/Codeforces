#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        long long n1 = n-(k-1);
        if(n1>0 and n1%2!=0){
            cout<<"YES"<<endl;
            for(long long i=0; i<k-1; i++){
                cout<<1<<" ";
            }
            cout<<n1<<endl;
            continue;
        }
        long long n2 = n-2*(k-1);
        if(n2>0 and n2%2==0){
            cout<<"YES"<<endl;
            for(long long i=0; i<k-1; i++){
                cout<<2<<" ";
            }
            cout<<n2<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}