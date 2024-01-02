#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long int finalAns(long long int n){
    if(n<6){
        return n;
    }
    else{
        return n+finalAns(n/2);
    }
}

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int num = n;

        while(num-->0){
            int x,y;
            cin>>x>>y;
        }

        long long int ans = finalAns(n);
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}