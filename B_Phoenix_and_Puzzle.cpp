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
        bool ans=false;
        cin>>n;
        if(n%2==0){
            int x=n/2;
            int y = sqrt(x);
            if(y*y==x){
                ans=true;
            }
        }
        if(n%4==0){ 
            int x=n/4;
            int y=sqrt(x);
            if(y*y==x){
                ans=true;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}