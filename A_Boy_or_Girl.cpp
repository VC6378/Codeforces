#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    unordered_set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{ 
        cout<<"IGNORE HIM!";
    }
    fastio()
    return 0;
}