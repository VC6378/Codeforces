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
    int n,u,d;
    cin>>n>>u>>d;
    int h[n];
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    int total = 1;
    int finalans = 1;
    for(int i=1; i<=n; i++){
        if((h[i]-h[i-1]<=u) && (h[i-1]-h[i]<=d)){
            total++;
        }
        else if((h[i-1]-h[i]>d) && (finalans==1)){
            finalans=0;
            total++;
        }
        else{
            break;
        }
    }
    cout<<total<<endl;
 }

 

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}