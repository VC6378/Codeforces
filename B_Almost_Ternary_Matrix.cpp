#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout<<((i%4<=1) != (j%4<=1))<<" ";
                
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}