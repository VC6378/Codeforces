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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0;
            for (int i = n - 2; i >= 0; i--)
            {
                while (arr[i] >= arr[i + 1] && arr[i] > 0)
                {
                    arr[i] /= 2;
                    ans++;
                }
                if (arr[i] == arr[i + 1])
                {
                    ans=-1;
                }
            }
            cout << ans << '\n';
        }
    }
    fastio() return 0;
}