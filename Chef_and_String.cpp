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
        string left = "";
        string right = "";
        right+=s[n-1];
        for(int i=0; i<n-1; i++){
            right+=s[i];
        }
        for(int i=1; i<n; i++){
            left+=s[i];
        }
        left+=s[0];

        if(left!=right){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    fastio()
    return 0;
}