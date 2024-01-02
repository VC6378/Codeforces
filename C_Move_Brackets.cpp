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
        string s;
        cin>>s;
        int ans=0;
        int bal = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                bal++;
            }
            else{
                bal--;
                if(bal<0){
                    bal=0;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}