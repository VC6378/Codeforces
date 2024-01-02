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
        string s,u;
        cin>>s>>u;
        int count = 0;
        for(int i=0; i<n;){
            if(s[i]==u[i]){
                count++;
                i++;
            }
            else if(u[i]=='N'){
                i++;
            }
            else{
                i+=2;
            }
        }
        cout<<count<<endl;
    }
    fastio()
    return 0;
}