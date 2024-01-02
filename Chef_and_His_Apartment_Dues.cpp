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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        int cntafterzero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cnt += 1100;
                cntafterzero++;
            }
            else
            {
                if (cntafterzero)
                {
                    cnt += 100;
                }
            }
        }
        cout << cnt << endl;
    }

    fastio() return 0;
}