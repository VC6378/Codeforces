#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long a,b;
        cin>>a>>b;
        long long n,m;
        cin>>n>>m;
        long long ans;
        if(n<=m){
            ans = n*min(a,b);
        }
        if((m*a)<=b*(m+1)){
            long long temp1=n/(m+1);
            long long temp2=n%(m+1);
            long long temp3=temp1*m*a;

            temp3+=temp2*min(a,b);
            ans=temp3;
        }
        else{
            ans=n*b;
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}