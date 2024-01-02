#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n,k;
    cin>>n>>k;
    long long int cntevens,cntodds;
    if(n&1){
        cntodds=(n+1)/2;
        cntevens=(n-1)/2;
    }
    else{
        cntodds=n/2;
        cntevens=n/2;
    }
    if(k<=cntodds){
        cout<<(2*k-1)<<endl;
    }
    else{
        k=k-cntodds;
        cout<<2*k<<endl;
    }
    fastio()
    return 0;
}