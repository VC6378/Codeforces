#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while (t-->0)
    {
        int x;
        cin>>x;
        int ans=-1;
        for(int i=0;i<32;i++){
            for(int j=0;j<32;j++){
                int y = (1<<i) | (1<<j);
                if(y<x && x+y>(x^y) && y+(x^y)>x){
                    ans=y;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    fastio()
    return 0;
}