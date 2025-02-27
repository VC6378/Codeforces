#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<long long,long long> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<long long> v32;
typedef vector<vector<long long> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

 

void solve()
{
    long long n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    long long cnt = 0;
    for (long long i = 0; i < n; i++)
    {
        k--;
        if (s[i] == 'L')
        {
            x--;
        }
        else
        {
            x++;
        }
        if (x == 0)
        {
            cnt++;
            break;
        }
        if (k == 0)
            break;
    }
    if (k == 0)
    {
        cout << cnt << "\n";
        return;
    }
    if (x != 0)
    {
        cout << cnt << "\n";
        return;
    }

    long long step = 0;
    long long ind = -1;
    for (long long i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            step--;
        else
            step++;
        if (step == 0)
        {
            ind = i + 1;
            break;
        }
    }
    // cout << ind  << "\n";

    if (ind == -1)
    {
        cout << cnt << "\n";
        return;
    }
    cnt += k / ind;
    cout << cnt << endl;
    return;
 }

 

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}