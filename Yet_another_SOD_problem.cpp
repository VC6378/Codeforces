#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int l,r;
        cin>>l>>r;
        if((l+1)%3==0){
            l = l+1;
        }
        else if((l+2)%3==0){
            l = l+2;
        }
        if((r-1)%3==0){
            r = r-1;
        }
        else if((r-2)%3==0){
            r = r-2;
        }

        if(l>r){
            cout<<0<<endl;
        }
        else{
            cout<<((r-l)/3)+1<<endl;
        }
    }
    fastio()
    return 0;
}