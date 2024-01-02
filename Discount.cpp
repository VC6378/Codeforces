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
        int x;
        cin >> x;
        if ((100 - x) >= 0)
        {
            cout << 100 - x << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    fastio() return 0;
}