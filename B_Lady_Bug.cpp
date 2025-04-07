#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        long long cnt1=0;
        long long cnt2=0;
        for(long long i=0;i<n;i++){
            if(i&1){
                cnt2 += a[i] == '0';
                cnt1 += b[i] == '0';
            }
            else{
                cnt1 += a[i] == '0';
                cnt2 += b[i] == '0';
            }
        }

        cout<<(cnt1>=(n+1)/2 && cnt2>=(n)/2 ? "YES" : "NO")<<endl;
    }
    fastio()
    return 0;
}