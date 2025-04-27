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
        for(long long i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
            }
        }

        long long totalcnt = cnt*(cnt-1)+(n-cnt)*(cnt+1);
        cout<<totalcnt<<endl;
    }
    fastio()
    return 0;
}