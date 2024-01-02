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
        vector<long long int> a(n);
        vector<long long int> b(n);
        long long int suma=0,sumb=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            suma+=a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            sumb+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long int ans = suma+sumb-b[n-1];
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}