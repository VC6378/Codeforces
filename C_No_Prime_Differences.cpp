#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                if(i%2==0){
                    cout<<(n/2+i/2)*m+j+1<<" ";
                }
                else{
                    cout<<(i/2)*m+j+1<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    fastio()
    return 0;
}