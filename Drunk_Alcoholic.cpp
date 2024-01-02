#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int k;
        cin>>k;
        long long int forward = ((k+1)/2)*3;
        long long int backward = (k/2)*1;
        cout<<(forward-backward)<<endl;
    }
    fastio()
    return 0;
}