#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,d;
        cin>>n>>d;
        if(n==1 && d==1){
            cout<<"YES"<<endl;
        }
        else{
            int i=1;
            while(ceil(d/(i+1))>n){
                i++;
            }
            if(i+ceil(d/(i+1))<=n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    fastio()
    return 0;
}