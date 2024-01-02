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
        int n, m;
        cin >> n >> m;
        int invalid = 0;
        int weak = 0;
        while (n-- > 0)
        {
            string s;
            cin >> s;
            char arr[m];
            for (int i = 0; i < m; i++)
            {
                cin >> arr[i];
            }
            if (s == "correct")
            {
                for (int i = 0; i < m; i++)
                {
                    if (arr[i] == '0')
                    {
                        invalid++;
                    }
                }
            }
            else if (s == "wrong")
            {
                int freq = 0;
                for (int i = 0; i < m; i++)
                {
                    if (arr[i] == '1')
                    {
                        freq++;
                    }
                }
                if (freq == m)
                {
                    weak++;
                }
            }
        }

        if (invalid != 0)
        {
            cout << "INVALID" << endl;
        }
        else if (weak != 0)
        {
            cout << "WEAK" << endl;
        }
        else
        {
            cout << "FINE" << endl;
        }
    }
    fastio() return 0;
}