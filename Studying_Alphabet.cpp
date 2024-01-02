#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n;
    cin >> n;
    while (n-- > 0)
    {
        string s1;
        cin >> s1;
        sort(s1.begin(), s1.end());
        bool ans = true;
        if (s.length() > s1.length())
        {

            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] != s1[i])
                {
                    ans = false;
                    break;
                }
            }
        }

        else
        {

            for (int i = 0; i < s1.length(); i++)
            {
                if (s[i] != s1[i])
                {
                    ans = false;
                    break;
                }
            }
        }

        if (ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    fastio() return 0;
}