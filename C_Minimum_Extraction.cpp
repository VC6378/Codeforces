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
        vector<int> vec;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());   
        int maxi=vec[0];
        for(int i=n-1; i>0; i--){
            maxi = max(maxi,vec[i]-vec[i-1]);
        }
        cout<<maxi<<endl;
    }
    fastio()
    return 0;
}