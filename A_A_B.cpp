#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<3; i++){
            if(s[i]=='+'){
                continue;
            }
            else{
                ans+=s[i];
            }
        }
        cout<<ans-96<<endl;
    }
    fastio()
    return 0;
}