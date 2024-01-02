#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    string temp="";
    temp;
    int cnt=0;
    for(int i=1; i<s.size(); i++){
        if(isupper(s[i])){
            cnt++;
        }
    }
    if(cnt==s.size()-1){
        for(int i=0; i<s.size(); i++){
            if(isupper(s[i])){
                temp+=tolower(s[i]);
            }
            else{
                temp+=toupper(s[i]);
            }
        }
        cout<<temp<<endl;
    }
    else{
        cout<<s<<endl;
    }
    fastio()
    return 0;
}