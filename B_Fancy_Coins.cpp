#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int m, k, a1, ak;
		cin >> m >> k >> a1 >> ak;
		int taken_k = m / k;
		int taken_1 = m % k;
		int taken_fancy_1 = max(0, taken_1 - a1);
		int left_regular_1 = max(0, a1 - taken_1);
		int taken_fancy_k = max(0, taken_k - ak);
		int to_replace = min(left_regular_1 / k, taken_fancy_k);
		int ans = taken_fancy_1 + taken_fancy_k - to_replace;
		cout << ans << endl;

    }
    fastio()
    return 0;
}