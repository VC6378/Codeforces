#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,k;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int ans;
    if(k==0){
        ans = vec[0]-1;
    }
    else{
        ans=vec[k-1];
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(vec[i]<=ans){
            cnt++;
        }
    }

    if(ans<1 || cnt!=k){
        cout<<(-1)<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}