#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int D,d,P,Q;
        cin>>D>>d>>P>>Q;
        long long int ans = 0;
        long long int sum=0;
        long long int x= D/d;
        long long int remi = D%d;
        long long int fu = x*P+Q*(x*(x-1)/2);
        long long int total = d*fu+remi*(P+x*Q);

        cout<<total<<endl;
    }
    fastio()
    return 0;
}