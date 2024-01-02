#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    int upp=0;
    int lower=0;
    for(int i=0; i<s.size(); i++){
        if(islower(s[i])){
            lower++;
        }
        else{
            upp++;
        }
    }
    if(upp<=lower){
        for(int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }

    cout<<s<<endl;
    fastio()
    return 0;
}