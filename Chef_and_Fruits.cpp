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
        int n, m, k;
        cin >> n >> m >> k;
        if (n < m)
        {
            if ((m - (n + k)) >= 0)
            {
                cout << (m - (n + k)) << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (m < n)
        {
            if ((n - (m + k)) >= 0)
            {
                cout << (n - (m + k)) << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    fastio() return 0;
}