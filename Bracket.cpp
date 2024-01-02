#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    bool ans=false;
    stack<char> st;
    for(auto ch:s){
        if(ch=='('){
            st.push(ch);
        }
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            if(st.top()=='('){
                ans = true;
            }
            while(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
                st.pop();
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}