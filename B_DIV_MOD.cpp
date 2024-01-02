#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int l,r,a;
        cin>>l>>r>>a;
        int maxi=-1;
        for(int i=l; i<=r; i++){
            int ans = floor(i/a)+i%a;
            if(ans>maxi){
                maxi=ans;
            }
        }
        cout<<maxi<<endl;
    }
    fastio()
    return 0;
}