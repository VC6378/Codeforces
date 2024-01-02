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
        for(int i=1; i<=n/2; i++){
            cout<<n-i+1<<" ";
            cout<<i<<" ";
        }
        if(n%2==1){
            cout<<(n+1)/2<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}