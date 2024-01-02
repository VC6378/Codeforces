#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x;
        cin >> x;
        int avg = x * 3;
        int a = 1;
        int b = 3;
        int c = avg - a - b;
        cout << a << " " << b << " " << c << endl;
    }
    fastio() return 0;
}