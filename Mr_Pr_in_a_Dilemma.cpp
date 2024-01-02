#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool meet = 0;
        if((c==d)&&(a==b)){
            meet = 1;
        }
        else if((c==d)&&(a!=b)){
            meet = 0;
        }
        else{
            long long int diffone = abs(a-b);
            long long int difftwo = abs(c-d);

            if((diffone%difftwo)==0){
                meet = 1;
            }
        }

        if(meet){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}