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
        s='0'+s;
        int p=s.size();
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>='5'){
                s[i-1]++;
                p=i;
            }
        }

        for(int i=(s[0]=='0');i<s.size();i++){
            if(i>=p) cout<<'0';
            else cout<<s[i];
        }
        cout<<endl;
    }
    fastio()
    return 0;
}