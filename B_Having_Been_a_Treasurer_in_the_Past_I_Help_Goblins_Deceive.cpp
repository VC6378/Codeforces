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
        long long up=0;
        long long down=0;
        for(long long i=0;i<n;i++){
            if(s[i]=='-'){
                up++;
            }
            else{
                down++;
            }
        }
        if(up%2==0){
            long long ans = up/2*up/2*down;
            cout<<ans<<endl;
        }
        else{
            long long ans = (up/2+1)*(up/2)*down;
            cout<<ans<<endl;
        }
        
    }
    fastio()
    return 0;
}