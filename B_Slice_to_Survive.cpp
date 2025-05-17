#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long steps(long long x)
{
    long long ans = 0;
    while (x > 1)
    {
        if (x & 1)
        {
            x = x / 2 + 1;
        }
        else
        {
            x = x / 2;
        }
        ans++;
    }
    return ans;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m,a,b;
        cin>>n>>m>>a>>b;
        long long bb = steps(n)+steps(b);
        long long aa = steps(m)+steps(a);
        long long ba = steps(m-b+1)+steps(n);
        long long ab = steps(n-a+1)+steps(m);
        long long ans = min({aa,bb,ba,ab});
        cout<<ans+1<<endl;
    }
    fastio()
    return 0;
}