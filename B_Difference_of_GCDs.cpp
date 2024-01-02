#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,l,r;
        cin>>n>>l>>r;
        vector<long long> vec(n+1);
        bool flag=1;
        for(long long i=1;i<=n;i++){
            vec[i]=(((l - 1) / i + 1) * i);
            flag=flag&&(vec[i]<=r);
        }
        // cout<<"Hello"<<endl;

        if(flag){
            cout<<"YES"<<endl;
            for(long long i=1;i<=n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}