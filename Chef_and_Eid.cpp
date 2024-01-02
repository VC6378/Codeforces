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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int min = abs(a[0] - a[1]);
        for (int i = 0; i < n; i++)
        {
            if (abs(a[i + 1] - a[i]) < min)
            {
                min = a[i + 1] - a[i];
            }
        }
        cout << min << endl;
    }
    fastio() return 0;
}