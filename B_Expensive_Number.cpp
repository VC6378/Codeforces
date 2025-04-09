#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        string n;
        cin>>n;
        if(n.size()==1){
            cout<<0<<endl;
        }
        else{
            long long ans=0;
            long long cnt=0;
            long long maxi=0;
            for(long long i=0;i<n.size();i++){
                if(n[i]=='0') cnt++;
                else{
                    maxi = max(maxi,cnt+1);
                }
            }
            cout<<n.size()-maxi<<endl;
        }
    }
    fastio()
    return 0;
}