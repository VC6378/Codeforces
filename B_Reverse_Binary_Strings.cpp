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
        long long cnt=0;
        for(long long i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                cnt++;
            }
        }

        long long ans = ceil(cnt/2.0);
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}