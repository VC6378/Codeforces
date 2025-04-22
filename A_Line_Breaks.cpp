#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string l;
        cin >> l;

        if (l.length() <= m)
        {
            m -= l.length();
            ans++;
        }
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                cin >> l;
            }
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
