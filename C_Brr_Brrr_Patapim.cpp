#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<long long> p(2*n+1,0);
        vector<bool> vis(2*n+1,false);
        for(long long i=1;i<=n;i++){
            for(long long j=1;j<=n;j++){
                long long x;
                cin>>x;
                p[i+j]=x;
                vis[x]=true;
            }
        }

        for(long long i=1;i<=2*n;i++){
            if(p[i]!=0) cout<<p[i]<<" ";
            else{
                for(long long j=1;j<=2*n;j++){
                    if(!vis[j]){
                        cout<<j<<" ";
                        vis[j]=true;
                        break;
                    }
                }
            }
        }

        cout<<endl;

    }
    fastio()
    return 0;
}