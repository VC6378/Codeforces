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
        int cnt = 0;
        int flag = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(s[i]==s[j]){
                    cnt++;
                }
            }
            if(cnt%2!=0){
                flag = 1;
                break;
            }
            cnt = 0;
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}