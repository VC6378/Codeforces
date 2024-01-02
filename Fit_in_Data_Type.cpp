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
        if((x>=0)&&(x<=n)){
            cout<<x<<endl;
        }
        else{
            cout<<(x%n)-1<<endl;
        }
    }
    fastio()
    return 0;
}