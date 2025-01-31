#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long f(vector<vector<long long>> &dp, vector<vector<long long>> &vec, long long i, long long j)
{
    if (i == 0 && j == 0)
    {
        return vec[i][j];
    }
    if (i < 0 or j < 0)
        return -1e10;
    if (dp[i][j] != -1e9)
        return dp[i][j];
    long long left = -1e9;
    long long up = -1e9;
    if (i > 0)
    {
        up = f(dp, vec, i - 1, j) + vec[i][j];
    }
    if (j > 0)
    {
        left = f(dp, vec, i, j - 1) + vec[i][j];
    }
    return dp[i][j] = max(up, left);
}

int32_t main()
{
    long long n, m;
    cin >> n >> m;
    vector<vector<long long>> vec(n, vector<long long>(m));
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    vector<vector<long long>> dp(n, vector<long long>(m, -1e9));
    cout << f(dp, vec, n - 1, m - 1) << endl;
    fastio()

return 0;
}