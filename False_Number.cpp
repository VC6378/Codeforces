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
        if(s[0]=='1'){
            s[0]='0';
        }
        cout<<'1'+s<<endl;
        
    }
    fastio()
    return 0;
}