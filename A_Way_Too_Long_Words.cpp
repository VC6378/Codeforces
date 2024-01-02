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
        if(s.size()<=10){
            cout<<s<<endl;
        }
        else{
            int si = s.size();
            string temp="";
            string stringsi = to_string(si-2);
            temp+=s[0];
            temp+=stringsi;
            temp+=s[si-1];
            cout<<temp<<endl;
        }
    }
    fastio()
    return 0;
}