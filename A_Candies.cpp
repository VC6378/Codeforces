#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int val;
        for(int i=2; i<=n; i++){
            val = pow(2,i)-1;
            if(n%val==0){
                cout<<n/val<<endl;
                break;
            }
        }
    }
    fastio()
    return 0;
}