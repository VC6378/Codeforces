#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long int M = 1e9+7;

int32_t main()
{
    int size = 1e6;
    vector<int> pff(size);
    pff[1]=1;
    for(int i=2; i<=size; i++){
        pff[i] = ((pff[i-1]%M) * (i%M))%M;
    }
    int t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        long long nums = n-1;
        long long occuring = ((nums%M) * (nums+1)%M)%M;
        long long ans = (occuring*pff[n])%M;
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}