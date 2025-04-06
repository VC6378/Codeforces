#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        vector<string> a(n);
        for(int i=0;i<n;i++){
            string s(m,'0');
            for(int j=0;j<m;j++){
                cin>>s[j];
            }
            a[i]=s;
        }
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='0') break;
                vis[i][j]=1;
            }
        }

        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(a[i][j]=='0') break;
                vis[i][j]=1;
            }
        }

        bool flag = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='1' && !vis[i][j]){
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    fastio()
    return 0;
}