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
        char last = s[n-1];
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i]==last){
                ans++;
            }
        }
        if(ans>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}