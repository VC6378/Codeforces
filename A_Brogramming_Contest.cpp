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
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                cnt++;
            }   
        }
        if(s[0]=='1'){
            cnt++;
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}