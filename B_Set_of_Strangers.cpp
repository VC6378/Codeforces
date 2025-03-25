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
        vector<vector<long long>> vec(n,vector<long long>(m));
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>vec[i][j];
            }
        }
        vector<long long>color(n*m,0);
        vector<long long> bad(n*m,0);
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                color[vec[i][j]-1]=1;
                if(i+1<n && vec[i][j]==vec[i+1][j]){
                    bad[vec[i][j]-1]=1;
                }
                if(j+1<m && vec[i][j]==vec[i][j+1]){
                    bad[vec[i][j]-1]=1;
                }
            }
        }

        long long colorsum=0;
        long long badsum=0;
        long long maxbad=0;
        for(long long i=0;i<n*m;i++){
            colorsum+=color[i];
            badsum+=bad[i];
            maxbad = max(maxbad,bad[i]);
        }

        cout<<colorsum+badsum-1-maxbad<<endl;
    }
    fastio()
    return 0;
}