#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,l;
    cin>>n>>l;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    double ans;
    sort(arr.begin(),arr.end());
    ans = max(arr[0],l-arr[n-1]);
    for(int i=0; i<n-1; i++){
        ans = max(ans,((double)(arr[i+1]-arr[i]))/2);
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
    fastio()
    return 0;
}