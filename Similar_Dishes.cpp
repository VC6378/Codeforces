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
        string s1[4];
        string s2[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> s1[i];
        }
        for (int i = 0; i < 4; i++)
        {
            cin >> s2[i];
        }
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (s1[i] == s2[j])
                {
                    count++;
                }
            }
        }
        if (count >= 2)
        {
            cout << "similar" << endl;
        }
        else
        {
            cout << "dissimilar" << endl;
        }
    }
    fastio() return 0;
}