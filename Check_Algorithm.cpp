#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        string c = "";
        c.push_back(s[0]);
        long long int count = 1;
        for(long long int i=1; i<s.length(); i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                c.append(to_string(count));
                c.push_back(s[i]);
                count = 1;
            }
        }
        c.append(to_string(count));
        if(c.length()<s.length()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}