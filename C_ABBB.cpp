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
        stack<char> st;
        for(int i=0; i<(int)s.size(); i++){
            if(st.size()==0){
                st.push(s[i]);
            }
            else if(s[i]=='B' && (st.top()=='A' || st.top()=='B')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        cout<<(int)st.size()<<endl;
    }
    fastio()
    return 0;
}