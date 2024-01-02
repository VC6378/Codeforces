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
        int n = s.size();
        set<string> ans;
        for(int i=0; i<n; i++){
            string temp;
            temp+=s[i];
            temp+=s[i+1];
            ans.insert(temp);
        }
        cout<<ans.size()-1<<endl;
    }
    fastio()
    return 0;
}