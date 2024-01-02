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
        int maxx = 0;
        while(n-->0){
            int s,v,p;
            cin>>s>>v>>p;
            int res = (p/(s+1))*v;
            if(res>maxx){
                maxx = res;
            }
        }
        cout<<maxx<<endl;
        
    }
    fastio()
    return 0;
}