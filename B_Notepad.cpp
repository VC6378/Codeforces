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
        cin>>n;
        string s;
        cin>>s;
        unordered_map<string,int> mp;
        // string s1="";
        string s1;
        bool flag = false;
        for(int i=0; i<s.size()-1; i++){
            // s1="";
            s1=s[i];
            s1+=s[i+1];

            if(mp.find(s1)==mp.end()){
                mp[s1]=i;
            }
            else{
                if(mp[s1]!=i-1){
                    flag=true;
                    break;
                }
                
            }

        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    fastio()
    return 0;
}