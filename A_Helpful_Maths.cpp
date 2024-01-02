#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    vector<char> hehe;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='+'){
            continue;
        }
        hehe.push_back(s[i]);
    }
    sort(hehe.begin(),hehe.end());
    for(int i=0; i<hehe.size(); i++){
        if(i!=hehe.size()-1){
            cout<<hehe[i]<<"+";
        }
        else{
            cout<<hehe[i];
        }
    }
    cout<<endl;
    fastio()
    return 0;
}