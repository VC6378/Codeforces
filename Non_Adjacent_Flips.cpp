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
        bool final = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                count++;
            }
            if(s[i]=='1' && s[i+1]=='1'){
                final = 1;
                break;
            }
        }

        if(count==0){
            cout<<0<<endl;
        }
        else{
            if(final){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
                
            }
        }
    }
    fastio()
    return 0;
}