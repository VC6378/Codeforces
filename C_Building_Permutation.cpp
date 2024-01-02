#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long n;
    cin>>n;
    vector<long long> vec;
    for(long long i=0; i<n; i++){
        long long x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    long long res=0;
    for(long long i=0; i<n; i++){
        res+=abs(i+1-vec[i]);
    }
    cout<<res<<endl;
    fastio()
    return 0;
}