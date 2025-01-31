#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    long long ans=1;
    while(n!=0){
        ans=ans*n;
        n--;
    }
    cout<<ans<<endl;
    fastio()
    return 0;
}