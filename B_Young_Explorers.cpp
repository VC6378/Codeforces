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
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        int ans=0;
        int curr=0;
        sort(vec.begin(),vec.end());
        for(int i=0; i<n; i++){
            if(++curr==vec[i]){
                ans++;
                curr=0;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}