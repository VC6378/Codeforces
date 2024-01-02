#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,s;
        cin>>n>>s;
        if(n==s){
            cout<<n<<endl;
        }
        else if(n>s){
            cout<<s<<endl;
        }
        else{
            cout<<(2*n)-s<<endl;
        }
    }
    fastio()
    return 0;
}