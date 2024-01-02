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
        int min = 1000000;
        int max = -1;
        int min_idx;
        int max_idx;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
                min_idx = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                max_idx = i;
            }
        }
        if (min_idx < max_idx)
        {
            cout << min << " " << max << endl;
        }
        else
        {
            cout << max << " " << min << endl;
        }
    }
    fastio() return 0;
}