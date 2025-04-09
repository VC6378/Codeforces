#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool check(long long k)
{
    if (k == 1)
        return true;
    if (k % 2 == 0)
        return false;
    return true;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long k;
        cin>>k;
        if(check(k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}