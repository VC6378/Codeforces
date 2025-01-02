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
        string ans="";
        ans+="1";
        for(int i=1;i<n;i++){
            ans+="0";
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}