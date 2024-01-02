#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ans=0;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=a[i]-k;
            if(sum<0){
                ans = i+1;
                break;
            }
        }
        if(ans==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<" "<<ans<<endl;
        }
    }
    fastio()
    return 0;
}