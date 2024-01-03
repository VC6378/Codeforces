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
        long long res=n-1;
        for(long long i=1;i<n-1;i++){
            if(s[i-1]==s[i+1]) res--;
        }
        cout<<res<<endl;
    }
    fastio()
    return 0;
}