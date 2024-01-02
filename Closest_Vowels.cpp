#include <bits/stdc++.h>
using namespace std;

const unsigned m = 1000000007;
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        int pro = 1;
        for(int i=0; i<n; i++){
            if((s[i]=='c')||(s[i]=='g')||(s[i]=='l')||(s[i]=='r')){
                pro = (pro*2)%m;
            }
        }

        cout<<pro<<endl;
        
    }
    return 0;
}