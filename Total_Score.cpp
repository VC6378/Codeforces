#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,k;
        cin>>n>>k;
        long long int que[k];
        for(long long int i=0; i<k; i++){
            cin>>que[i];
        }
        while(n-->0){
            string s;
            cin>>s;
            long long int sum = 0;
            for(int i=0; i<k; i++){
                if(s[i]=='1'){
                    sum+=que[i];
                }
            }
            cout<<sum<<endl;
        }
    }
    fastio()
    return 0;
}