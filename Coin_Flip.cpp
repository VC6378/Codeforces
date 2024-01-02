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
        int g;
        cin >> g;
        while (g-- > 0)
        {
            int i, n, q;
            cin >> i >> n >> q;
            if (n % 2 == 0)
            {
                cout << n / 2 << endl;
            }
            else
            {
                if (i == 1)
                {
                    if (q == 1)
                    {
                        cout << (n - 1) / 2 << endl;
                    }
                    else
                    {
                        cout << (n + 1) / 2 << endl;
                    }
                }
                else
                {
                    if (q == 2)
                    {
                        cout << (n - 1) / 2 << endl;
                    }
                    else
                    {
                        cout << (n + 1) / 2 << endl;
                    }
                }
            }
        }
    }
    fastio() return 0;
}