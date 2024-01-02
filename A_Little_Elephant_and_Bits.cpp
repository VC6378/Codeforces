#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    int firstleft = 1000000;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            firstleft=i;
            break;
        }
    }

    string ans = "";
    if(firstleft!=1000000){
        for(int i=0; i<s.size(); i++){
            if(i==firstleft){
                continue;
            }
            else{
                ans+=s[i];
            }
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            if(i==s.size()-1){
                continue;
            }
            else{
                ans+=s[i];
            }
        }
    }

    cout<<ans<<endl;
    fastio()
    return 0;
}