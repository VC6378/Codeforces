#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool check(long long n,long long m){
    if(n==m) return true;
    else if(n%3!=0) return false;
    else{
        return (check(n/3,m) || check(2*n/3,m));
    }
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        if(check(n,m)) cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}