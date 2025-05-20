#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        long long x = n/2;
        long long sum = x*(2*n-2-(x-1)*2);
        cout<<sum/2+1<<endl; 
    }
    fastio()
    return 0;
}