#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int ans=-1;
    sort(vec.begin(),vec.end());
    if(vec[0]>1){
        ans=1;
    }
    else{
        for(int i=1; i<n; i++){
            if(vec[i]-vec[i-1] > 1){
                ans = vec[i-1]+1;
                break;
            }
        }
    }

    if(ans<=0){
        ans = vec[n-1]+1;
    }

    cout<<ans<<endl;
    fastio()
    return 0;
}