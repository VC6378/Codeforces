#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int smallestDivisor(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        int ans;
        if(n%2==0){
            ans=n+2*k;
        }
        else{
            ans = n+2*(k-1)+smallestDivisor(n);
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}