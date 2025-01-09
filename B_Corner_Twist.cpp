#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MP make_pair
mt19937 rnd(time(0));
int n, m;
pair<vector<int>, vector<int>> read()
{
    vector<int> p(n, 0), q(m, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            p[i] += c - '0', q[j] += c - '0';
        }
    for (auto &i : p)
        i %= 3;
    for (auto &i : q)
        i %= 3;
    return MP(p, q);
}
void solve()
{
    cin >> n >> m;
    cout << (read() == read() ? "YES" : "NO") << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    int _;
    cin >> _;
    while (_--)
        solve();
    return 0;
}