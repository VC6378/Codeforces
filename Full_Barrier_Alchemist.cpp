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
        int n, h, y1, y2, l;
        cin >> n >> h >> y1 >> y2 >> l;
        int cnt = 0;
        while (n-- > 0)
        {
            int t, x;
            cin >> t >> x;
            if (t == 1)
            {
                if ((h - y1) <= x)
                {
                    cnt++;
                }
                else
                {
                    l--;
                    if (l == 0)
                    {
                        break;
                    }
                    cnt++;
                }
                // else{
                //     break;
                // }
            }

            else if (t == 2)
            {
                if ((y2) >= x)
                {
                    cnt++;
                }
                else
                {
                    l--;
                    if (l == 0)
                    {
                        break;
                    }
                    cnt++;
                }
                // else{
                //     break;
                // }
            }
        }

        cout << cnt << endl;
    }
    fastio() return 0;
}