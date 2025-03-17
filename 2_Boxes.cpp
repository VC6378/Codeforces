#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,y,k;
        cin>>x>>y>>k;
        if(abs(x-y)==k) cout<<0<<endl;
        else{
            int diff = abs(x-y);
            if(diff%2!=k%2) cout<<-1<<endl;
            else{
                cout<<abs(diff-k)/2<<endl;
            }
        }
    }
    fastio()
    return 0;
}