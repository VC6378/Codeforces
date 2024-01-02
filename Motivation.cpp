#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        int s,r;
        int max = 0;
        for(int i=0; i<n; i++){
            cin>>s>>r;
            if(s<=x){
                if(r>max){
                    max = r;
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}