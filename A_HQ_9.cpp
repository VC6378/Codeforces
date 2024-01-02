#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    bool ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            ans=1;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}