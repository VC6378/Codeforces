#include <bits/stdc++.h>
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
    ll n,m;
    cin>>n>>m;
    ll tempn=n;
    ll cnt2=0;
    ll cnt5=0;
    ll k=1;
    while(n>0 && n%2==0){
        cnt2++;
        n=n/2;
    }
    while(n>0 && n%5==0){
        cnt5++;
        n=n/5;
    }
    while(cnt2<cnt5 && k*2<=m){
        cnt2++;
        k=k*2;
    }
    while(cnt5<cnt2 && k*5<=m){
        cnt5++;
        k=k*5;
    }
    while(k*10<=m){
        k=k*10;
    }
    if(k==1){
        cout<<tempn*m<<endl;
    }
    else{
        k*=(m/k);
        cout<<tempn*k<<endl;
    }
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