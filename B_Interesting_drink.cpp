#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0; i<n; i++){
        cin>>price[i];
    }
    sort(price,price+n);
    int days;
    cin>>days;
    while(days--){
        int coins;
        cin>>coins;
        int ans;
        ans = upper_bound(price,price+n,coins)-price;
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}