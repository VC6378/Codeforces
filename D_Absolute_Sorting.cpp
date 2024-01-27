#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll>> vv32;
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
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    ll mini = 0;
    ll maxi = 1e9;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x = vec[i];
        ll y = vec[i + 1];
        ll midl = (x + y) / 2;
        ll midr = (x + y + 1) / 2;

        if (x < y)
        {
            maxi = min(maxi, midl);
        }
        if (x > y)
        {
            mini = max(mini, midr);
        }
    }

    if (mini <= maxi)
        cout << mini << endl;
    else
        cout << (-1) << endl;
}

int32_t main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}