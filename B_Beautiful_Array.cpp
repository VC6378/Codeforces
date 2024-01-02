#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define int long long

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<int> ans(n);
        ans[0]=b*k;
        s-=b*k;
        if(s<0){
            cout<<(-1)<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                int present=min(k-1,s);
                ans[i]+=(present);
                s-=present;
            }
            if(s>0){
                cout<<(-1)<<endl;
            }
            else{
                for(int i=0; i<n; i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }

    }
    fastio()
    return 0;
}