#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> pff(n+1);
        for(int i=1; i<=n; i++){
            pff[i] = pff[i-1]+(int(s[i - 1] == 'W'));
        }

        // for(int i=1; i<=n; i++){
        //     cout<<pff[i]<<" ";
        // }
        // cout<<endl;

        int result = INT_MAX;
        for(int i=k; i<=n; i++){
            result = min(result,pff[i]-pff[i-k]);
        }
        cout<<result<<endl;

    }
    fastio()
    return 0;
}