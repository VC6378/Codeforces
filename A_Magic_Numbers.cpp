#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    string s = to_string(n);
    // cout<<s<<endl;
    bool ans=true;
    if(s[0]=='4'){
        ans=false;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]!='1' && s[i]!='4'){
            ans=false;
            break;
        }
    }
    for(int i=0; i<s.size(); i++){
        string sub = s.substr(i,3);
        // cout<<sub<<endl;
        if(sub=="444"){
            ans=false;
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