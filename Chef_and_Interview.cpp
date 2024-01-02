#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int sum = 0;
        for(long long int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                sum+=i;
                if(i != n/i){
                    sum+=n/i;
                }
            }
        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}