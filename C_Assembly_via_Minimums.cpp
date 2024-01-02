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
        int m=n*(n-1)/2;
        int b[m];
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b,b+m);
        for(int i=0;i<m;i+=--n){
            cout<<b[i]<<" ";
        }
        cout<<1000000000<<endl;
    }
    fastio()
    return 0;
}