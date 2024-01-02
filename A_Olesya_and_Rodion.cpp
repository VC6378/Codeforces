#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,t;
    cin>>n>>t;
    string s="";
    if(t!=10){
        for(int i=0; i<n; i++){
            s+=to_string(t);
        }
        cout<<s<<endl;
    }
    else{
        if(n==1 && t==10){
            cout<<-1<<endl;
        }
        else{
            string ss = "";
            ss+='1';
            for(int i=0; i<n-1; i++){
                ss+='0';
            }
            cout<<ss<<endl;
        }
    }
    // cout<<s<<endl;
    fastio()
    return 0;
}