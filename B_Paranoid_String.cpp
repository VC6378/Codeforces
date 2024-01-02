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
        string s;
        cin>>s;
        if(n==1) cout<<1<<endl;
        else{
            long long cnt=n;
            for(long long i=1;i<n;i++){
                if(s[i]!=s[i-1]) cnt+=i;
            }
            cout<<cnt<<endl;
        }
    }
    fastio()
    return 0;
}