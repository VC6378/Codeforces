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
        string ans="";
        int n=s.size();
        bool flag = false;
        for(int i=0;i+1<n;i++){
            if(s[i]==s[i+1] && !flag){
                ans+=s[i];
                ans+=s[i+1];
                flag = true;
                break;
            }
        }

        if(ans==""){
            for(int i=0;i+2<n;i++){
                if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]){
                    ans+=s[i];
                    ans+=s[i+1];
                    ans+=s[i+2];
                    break;
                }
            }
        }

        if(ans!=""){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    fastio()
    return 0;
}