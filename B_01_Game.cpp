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
        int cntone=0;
        int cntzero=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                cntzero++;
            }
            else{
                cntone++;
            }
        }
        int mini = min(cntone,cntzero);
        if(mini&1){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
    fastio()
    return 0;
}