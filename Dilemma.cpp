#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int cnt = 0;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        if(cnt&1){
            cout<<"WIN"<<endl;
        }
        else{
            cout<<"LOSE"<<endl;
        }
    }
    fastio()
    return 0;
}