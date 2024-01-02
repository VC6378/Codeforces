#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<0<<endl;
        }
        else{
            int diff=abs(a-b);
            if(diff<=c) cout<<1<<endl;
            else{
                float mean=float(a+b)/2;
                float diffa=abs(mean-a);
                float diffb=abs(mean-b);
                // cout<<diffa<<endl;
                int ansa=ceil(diffa/c);
                int ansb=ceil(diffb/c);
                // cout<<ansa<<"dieiu"<<endl;
                cout<<max(ansa,ansb)<<endl;
            }
        }
    }
    fastio()
    return 0;
}