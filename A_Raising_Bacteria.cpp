#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n;
    cin>>n;
    int cnt=0;
    while(n!=0){
        if(n&1){
            cnt++;
        }
        n=n>>1;
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}