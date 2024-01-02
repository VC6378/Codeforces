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
        string black(m,'B');
        vector<string> res(n,black);
        res[0][0]='W';
        for(int i=0; i<n; i++){
            cout<<res[i]<<endl;
        }
    }
    fastio()
    return 0;
}