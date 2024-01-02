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
        int n, x;
        cin >> n >> x;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        bool ans = true;
        int sweetsNumber = sum / x;
        for (int i = 0; i < n; i++)
        {
            if (((sum - a[i]) / x == sweetsNumber))
            {
                cout << (-1) << endl;
                ans = false;
                break;
            }
        }
        // cout << sweetsNumber << endl;
        if (ans)
        {
            cout << sweetsNumber << endl;
        }
    }
    fastio() return 0;
}