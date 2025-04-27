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
        vector<long long> perm;
        for(long long i=0;i<n;i++){
            if(i!=x){
                perm.push_back(i);
            }
        }
        perm.push_back(x);
        for(long long i=0;i<n;i++){
            cout<<perm[i]<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}