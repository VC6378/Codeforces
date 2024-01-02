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
        long long int ans=0;
        for(int i=1; i<=n/2; i++){
            ans+=i*1ll*i;
        }
        cout<<ans*8<<endl;
    }
    fastio()
    return 0;
}