#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        long long sum=0;
        for(long long i=0;i<s.size();i++){
            if(s[i]=='1'){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}