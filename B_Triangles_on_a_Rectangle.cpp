#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int w,h;
        long long int ans=0;
        cin>>w>>h;
        for(int i=0; i<4; i++){
            int k;
            cin>>k;
            vector<int> vec(k);
            for(int i=0; i<k; i++){
                cin>>vec[i];
            }
            sort(vec.begin(),vec.end());
            int base = vec[k-1]-vec[0];
            long long int ar;
            if(i<2){
                ar = h*1ll*base;
                ans = max(ans,ar);
            }
            else{
                ar = w*1ll*base;
                ans = max(ans,ar);
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}