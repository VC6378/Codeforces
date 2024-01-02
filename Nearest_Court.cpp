#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,y;
        cin>>x>>y;
        int diff = abs(x-y);
        if(diff%2==0){
            cout<<diff/2<<endl;
        }
        else{
            cout<<(diff/2)+1<<endl;
        }
    }
    fastio()
    return 0;
}