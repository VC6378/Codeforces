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
        long long int n;
        long long int ans;
        cin >> n;
        if (n <= 6)
        {
            cout << 15 << endl;
        }
        else
        {
            if (n & 1)
            {
                n = n + 1;
                ans = (n / 2) * 1LL * 5;
            }
            else
            {
                ans = (n / 2) * 1LL * 5;
            }
            cout << ans << endl;
        }
    }
    fastio() return 0;
}