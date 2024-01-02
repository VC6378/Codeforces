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
        int arr[26];
        for (int i = 0; i < 26; i++)
        {
            cin >> arr[i];
        }
        string s1 = "abcdefghijklmnopqrstuvwxyz";
        string s;
        cin >> s;
        int i, j;
        int sum = 0;
        for ( i = 0; i < 26; i++)
        {
            for ( j = 0; j < s.size(); j++)
            {
                if (s1[i] == s[j])
                {
                    break;
                }
            }
            if (j == s.size())
            {
                sum += arr[i];
            }
        }
        cout << sum << endl;
    }
    fastio() return 0;
}