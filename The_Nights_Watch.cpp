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
        for(int i=0; i<n; i++){
            if(s[i]=='0' && (s[i-1]=='0'||i==0) && (s[i+1]=='0' || i+1==n)){
                s[i]=1;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}