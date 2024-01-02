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
        string ss = "";
        ss+="3";
        if(n==1){
            cout<<3<<endl;
        }
        else if(n==2){
            cout<<33<<endl;
        }
        else{
            n = n-2;
            for(int i=0; i<n; i++){
                ss+="0";
            }
            ss+="3";
            cout<<ss<<endl;
        }
    }
    fastio()
    return 0;
}