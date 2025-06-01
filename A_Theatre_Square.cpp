#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long nn = n/a;
    if(n%a!=0){
        nn++;
    }
    long long mm = m/a;
    if(m%a!=0){
        mm++;
    }
    cout<<nn*1ll*mm<<endl;
    fastio()
    return 0;
}