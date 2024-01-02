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
        int x, y;
        cin >> x >> y;
        string s1 = "", s2 = "";
        if (((x % 2 != 0) && (y % 2 != 0)) || (min(x, y) == 1))
        {
            cout << (-1) << endl;
        }
        else
        {
            if (x % 2 == 0)
            {
                int n1 = x / 2;
                for (int i = 0; i < n1; i++)
                {
                    s1 += 'a';
                }
                for (int i = 0; i < y; i++)
                {
                    s1 += 'b';
                }
                for (int i = 0; i < n1; i++)
                {
                    s1 += 'a';
                }

                s2 += 'b';
                y--;
                for (int i = 0; i < n1; i++)
                {
                    s2 += 'a';
                }
                for (int i = 0; i < y - 1; i++)
                {
                    s2 += 'b';
                }
                for (int i = 0; i < n1; i++)
                {
                    s2 += 'a';
                }
                s2 += 'b';
            }
            else
            {
                int n1 = y / 2;
                for (int i = 0; i < n1; i++)
                {
                    s1 += 'b';
                }
                for (int i = 0; i < x; i++)
                {
                    s1 += 'a';
                }
                for (int i = 0; i < n1; i++)
                {
                    s1 += 'b';
                }
                s2 += 'a';
                x--;
                for (int i = 0; i < n1; i++)
                {
                    s2 += 'b';
                }
                for (int i = 0; i < x - 1; i++)
                {
                    s2 += 'a';
                }
                for (int i = 0; i < n1; i++)
                {
                    s2 += 'b';
                }
                s2 += 'a';
            }

            cout<<s1<<endl;
            cout<<s2<<endl;
        }
    }
    fastio() return 0;
}