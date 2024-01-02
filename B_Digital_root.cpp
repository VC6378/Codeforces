#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin >> n;
    while (n-- > 0)
    {
        long long int k, x;
        cin >> k >> x;
        cout << (k - 1) * 9 + x << endl;
    }
    fastio() return 0;
}