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
        int a[n];
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            cin>>a[i];
            maxi = max(maxi,a[i]);
        }
        if(n*maxi<k){
            cout<<(-1)<<endl;
            continue;
        }
        int ans=n+1;
        for(int b=0; b<k; b++){
            int finaldes = -2;
            for(int i=0; i<n-1; i++){
                if(a[i]<a[i+1]){
                    finaldes=i;
                    break;
                }
            }
            ans=finaldes+1;
            if(finaldes==-2){
                break;
            }
            a[finaldes]++;
        }

        cout<<ans<<endl;
        
    }
    fastio()
    return 0;
}