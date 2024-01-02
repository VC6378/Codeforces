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
        string marked(n,'1');
        long long ans=0;
        for(long long i=0; i<n; ++i){
            if(s[i]=='0'){
                for(long long j=i+1; j<=n; j+=i+1){
                    if(s[j-1]=='1'){
                        break;
                    }
                    if(marked[j-1]=='0'){
                        continue;
                    }
                    marked[j-1]='0';
                    ans+=i+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}