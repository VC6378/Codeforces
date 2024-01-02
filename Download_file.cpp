#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        int t[n],d[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>t[i]>>d[i];
            if(t[i]<=k){
                k = k-t[i];
            }
            else{
                sum+=((t[i]-k)*d[i]);
                k=0;
            }

        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}