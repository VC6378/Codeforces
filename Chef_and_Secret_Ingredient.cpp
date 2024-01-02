#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,x;
        cin>>n>>x;
        long long int a[n];
        for(long long int i=0; i<n; i++){
            cin>>a[i];
        }
        long long int cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i]>=x){
                cnt++;
            }
        }
        if(cnt>=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}