#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long n;
    cin>>n;
    if(n%2==0){
        cout<<(n/2)<<endl;
    }
    else{
        cout<<((-1)*((n+1)/2))<<endl;
    }
    fastio()
    return 0;
}