#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,x,k;
        cin>>n>>x>>k;
        long long int a[n];
        long long int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        long long int cnt = 0;
        for(int i=0; i<n; i++){
            if((abs(a[i]-b[i]))<=k){
                cnt++;
            }
        }
        if(cnt>=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}