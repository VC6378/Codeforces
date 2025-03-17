#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,x;
        cin>>n>>x;
        vector<long long> vec(n);
        long long sum=0;
        for(long long i=0;i<n;i++){
            cin>>vec[i];
            sum+=vec[i];
        }
        if((sum) == x*n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}
