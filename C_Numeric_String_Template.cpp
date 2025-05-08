#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
        string s;
        cin >> s;

        if (s.size() != n)
        {
            cout << "NO\n";
            continue;
        }

        unordered_map<char, long long> m1;
        unordered_map<long long, char> m2; 
        bool ok = true;

        for (int j = 0; j < n; j++)
        {
            char ch = s[j];
            long long num = a[j];

            if (m1.find(ch) == m1.end() && m2.find(num) == m2.end())
            {
                m1[ch] = num;
                m2[num] = ch;
            }
            else if ((m1.count(ch) && m1[ch] != num) || (m2.count(num) && m2[num] != ch))
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
