#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int digitSum(int n){
    int ans=0;
    while(n>0){
        ans+=n%10;
        n=n/10;
    }
    return ans;
}

int32_t main()
{
    int k;
    cin>>k;
    int ans=0;
    while(k){
        ans++;
        if(digitSum(ans)==10){
            k--;
        }
    }
    cout<<ans<<endl;
    fastio()
    return 0;
}