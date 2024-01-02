#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int in[n] = {0};
    int out[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 1)
            {
                in[j]++;
                out[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (in[i] == n - 1 && out[i] == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << (-1) << endl;
    fastio() return 0;
}