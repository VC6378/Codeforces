#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int sarthak = 0;
        long long int anuradha = 0;
        while(n-->0){
            string s;
            cin>>s;
            char f = s[0];
            if((f=='E') || (f=='Q') || (f=='U') || (f=='I') || (f=='N') || (f=='O') ||(f=='X')){
                sarthak+=a;
            }
            else{
                anuradha+=b;
            }
        }

        if(sarthak>anuradha){
            cout<<"SARTHAK"<<endl;
        }
        else if(anuradha>sarthak){
            cout<<"ANURADHA"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
    fastio()
    return 0;
}