#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        int count = 0 ;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        cout<<count/2<<endl;
    }
    return 0;
}