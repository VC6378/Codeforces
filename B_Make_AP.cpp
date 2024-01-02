#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
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
    ll a, b, c;
    cin >> a >> b >> c;

    ll newa = 2*b-c;
    if(newa >= a && newa % a == 0 && newa != 0) {
        cout << "YES\n";
        return;
    }

    ll newb = a + (c - a)/2;
    if(newb >= b && (c-a)%2 == 0 && newb % b == 0 && newb != 0) {
        cout << "YES\n";
        return;
    }

    ll newc = 2*b-a;
    if(newc >= c && newc % c == 0 && newc != 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
    return;
}

 

int32_t main()
{
    ll t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}