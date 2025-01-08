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
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        n = unique(a.begin(), a.end()) - a.begin();
        int ans = n;

        for(int i=0;i+2<n;i++){
            ans-=(a[i]>a[i+1] && a[i+1]>a[i+2]);
            ans-=(a[i]<a[i+1] && a[i+1]<a[i+2]);
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}