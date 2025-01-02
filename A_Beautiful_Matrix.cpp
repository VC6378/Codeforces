#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    vector<vector<int>> mat(5,vector<int>(5));
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                r=i+1;
                c=j+1;
            }
        }
    }
    int ans = abs(3-r)+abs(3-c);
    cout<<ans<<endl;
    fastio()
    return 0;
}