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
        if(n&1){
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            if(n==2){
                cout<<(-1)<<endl;
            }
            else{
                cout<<"2 3 1 4 ";
                for(int i=5; i<=n; i++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
    fastio()
    return 0;
}