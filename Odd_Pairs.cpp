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
        long long int odds =0;
        long long int evens = 0;
        for(long long int i=1;i<=n;i++){
            if(i%2==0){
                evens++;
            }
            else{
                odds++;
            }
        }
        cout<<(2*(odds*evens))<<endl;
    }
    fastio()
    return 0;
}