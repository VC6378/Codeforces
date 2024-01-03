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
        vector<int> vec(n);
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mini=min(mini,vec[i]);
        }
        if(vec[0]==mini){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    fastio()
    return 0;
}