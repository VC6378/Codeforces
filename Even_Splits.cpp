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
        if(n<=2){
            cout<<s<<endl;
        }
        else{
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
    fastio()
    return 0;
}