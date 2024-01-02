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
        int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        string v;
        cin>>v;
        vector<int>vec;
        for(int i=0; i<n; i++){
            if(v[i]=='0'){
                vec.push_back(s[i]);
            }
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0]<<endl;
    }
    fastio()
    return 0;
}