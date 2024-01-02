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
        string s;
        cin >> s;
        int cnt = 0;
        if (n == 1)
        {
            if (s[0] == '0')
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    if (s[i] == '0' && s[i + 1] == '0')
                    {
                        cnt++;
                    }
                }
                else if (i == n - 1)
                {
                    if (s[n - 1] == '0' && s[n - 2] == '0')
                    {
                        cnt++;
                    }
                }
                else
                {
                    if (s[i] == '0' && s[i - 1] == '0' && s[i + 1] == '0')
                    {
                        cnt++;
                    }
                }
            }

            cout << cnt << endl;
        }
    }
    fastio() return 0;
}