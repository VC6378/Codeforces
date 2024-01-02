#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        int absa = abs(a);
        int absb = abs(b);
        if(absa-absb==0){
            cout<<absa*2<<endl;
        }
        else{
            int maxi = max(absa,absb);
            cout<<(maxi)+(maxi-1)<<endl;
        }
    }
    fastio()
    return 0;
}