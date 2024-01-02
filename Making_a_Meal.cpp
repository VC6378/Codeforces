#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        string farzistring;
        cin >> farzistring;
        s = s + farzistring;
    }
    int c = 0, e = 0, o = 0, d = 0, h = 0, f = 0;
    c = count(s.begin(), s.end(), 'c');
    e = count(s.begin(), s.end(), 'e');
    o = count(s.begin(), s.end(), 'o');
    d = count(s.begin(), s.end(), 'd');
    h = count(s.begin(), s.end(), 'h');
    f = count(s.begin(), s.end(), 'f');

    int result = min({c / 2, e / 2, o, d, h, f});
    cout << result << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}