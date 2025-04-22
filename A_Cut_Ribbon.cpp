#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long n,a,b,c;
    cin >> n >> a >> b >> c;
    long long dp[n+1];
    dp[0] = 0;
    for(long long i=1; i<=n; i++){
        dp[i] = INT_MIN;
        if(i-a >= 0) dp[i] = max(dp[i], dp[i-a]+1);
        if(i-b >= 0) dp[i] = max(dp[i], dp[i-b]+1);
        if(i-c >= 0) dp[i] = max(dp[i], dp[i-c]+1);
    }
    cout << dp[n] << endl;
    fastio()
    return 0;
}