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
        string s;
        cin>>s;
        vector<int> id;
        for(int i=0; i<n; i++){
            if(s[i]=='2'){
                id.push_back(i);
            }
        }

        bool ans=false;
        int k = id.size();
        if(k==1 || k==2){
            ans=true;
        }

        if(ans){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            vector<string> t(n, string(n, '='));
            for(int i=0; i<n; i++){
                t[i][i]='X';
            }
            for(int i=0; i<k; i++){
                int x = id[i];
                int y = id[(i+1)%k];

                t[x][y]='+';
                t[y][x]='-';
            }

            for(int i=0; i<n; i++){
                cout<<t[i]<<endl;
            }
        }

    }
    fastio()
    return 0;
}