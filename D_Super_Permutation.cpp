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
        int n;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n & 1)
            cout << (-1) << endl;
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (i % 2)
                {
                    cout << i << " ";
                }
                else
                {
                    cout << n - i << " ";
                }
            }
            cout << endl;
        }
    }
    fastio() return 0;
}