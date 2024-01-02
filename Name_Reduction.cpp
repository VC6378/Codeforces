#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string a,b,c;
        cin>>a>>b;
        a = a+b;
        sort(a.begin(),a.end());
        int n;
        cin>>n;
        while(n-->0){
            string k;
            cin>>k;
            c+=k;
        }
        sort(c.begin(),c.end());
        int cnt = 0;
        int ki = 0;
        for(int i=0; i<a.size(); i++){
            if(a[i]==c[ki]){
                ki++;
            }
        }
        if(ki==c.length()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}