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
        cout<<n<<" "<<(n-2)<<" ";
        for(int i=1; i<=n-1; i++){
            if(i==n-2){
                continue;
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    fastio()
    return 0;
}