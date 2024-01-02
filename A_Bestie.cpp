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
        int arr[n];
        int ans;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int g=arr[1];
        for(int i=2; i<=n; i++){
            g=__gcd(g,arr[i]);
        }
        if(g==1){
            cout<<0<<endl;
        }
        else{
            if(__gcd(g,n)==1){
                cout<<1<<endl;
            }
            else if(__gcd(g,n-1)==1){
                cout<<2<<endl;
            }
            else{
                cout<<3<<endl;
            }
        }
        
    }
    fastio()
    return 0;
}