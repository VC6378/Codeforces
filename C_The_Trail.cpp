#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<vector<long long>> vec(n,vector<long long>(m));
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>vec[i][j];
            }
        }
        long long x=0,y=0;
        for(auto ch:s){
            if(ch=='D'){
                long long su=0;
                for(long long i=0;i<m;i++){
                    su+=vec[x][i];
                }
                vec[x][y]-=su;
                x++;
            }
            else{
                long long su=0;
                for(long long i=0;i<n;i++){
                    su+=vec[i][y];
                }
                vec[x][y]-=su;
                y++;
            }
        }

        long long sum=0;
        for(long long i=0;i<m;i++){
            sum+=vec[n-1][i];
        }
        vec[n-1][m-1]-=sum;
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}