#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        char ch;
        cin>>n>>ch;
        string s;
        cin>>s;
        stack <int> st;
        int ans=0;
        bool f=false;
        int fg=-1;
        if(ch=='g'){
            ans=0;
        }
        else{
            for(int i=0; i<n; i++){
                if(s[i]==ch){
                    st.push(i);
                }
                else if(s[i]=='g'){
                    if(f==false){
                        fg=i;
                        f=true;
                    }
                    while(!st.empty()){
                        ans = max(ans,abs(i-st.top()));
                        st.pop();
                    }
                }
            }
        }
        while(!st.empty()){
            ans=max(ans,abs(n-st.top()+fg));
            st.pop();
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}