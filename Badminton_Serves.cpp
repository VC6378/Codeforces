#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int p;
        cin>>p;
        long long int cnt = 1;
        long long int div = p/2;
        cnt+=div;
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}