#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        k=min(k,30);
        long long num=pow(2,k);
        cout<<min(num,(long long)n+1)<<endl;
    }
    fastio()
    return 0;
}