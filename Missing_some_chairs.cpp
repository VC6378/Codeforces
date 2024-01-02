#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
long long int M = 1000000007;

long long int bin_Exp(long long int a,long long int b){
    long long int result = 1;
    while(b>0){
        if(b&1){
            result = (result*1LL*a)%M;
        }
        a = (a*1LL*a)%M;
        b = b>>1;
    }
    return result;
}

int32_t main()
{
     
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        cout<<bin_Exp(2,n)-1<<endl;
    }
    fastio()
    return 0;
}