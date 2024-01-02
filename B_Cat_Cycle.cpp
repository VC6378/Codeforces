#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        int f = n/2;
        int ans = ((k + (n % 2) * k / f) % n);
        cout<<ans<<endl;
    }
    fastio() return 0;
}