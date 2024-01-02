#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt = 0;
        for(int i=0; i<n;){
            if(s[i]=='0'){
                string ss = s.substr(i,k);
                if(count(ss.begin(),ss.end(),'0')==k){
                    cnt++;
                    i+=k;
                }
                else{
                    i++;
                }

            }
            else{
                i++;
            }
        }

        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}