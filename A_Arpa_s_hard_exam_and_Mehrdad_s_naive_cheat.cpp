#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n;
    cin >> n;
    int remainder = n % 4;

    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        if (remainder == 0)
        {
            cout << 6 << endl;
        }
        else if (remainder == 1)
        {
            cout << 8 << endl;
        }
        else if (remainder == 2)
        {
            cout << 4 << endl;
        }
        else if (remainder == 3)
        {
            cout << 2 << endl;
        }
    }
    fastio() return 0;
}