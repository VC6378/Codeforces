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
        int ans = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'W')
            {
                int b = 0, r = 0;
                while (i < n && s[i] != 'W')
                {
                    if (s[i] == 'R')
                        r++;
                    else
                        b++;
                    i++;
                }
                if (b == 0 || r == 0)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    fastio() return 0;
}