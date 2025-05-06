#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int sum = 0, mi = INT_MAX, ma = INT_MIN, cntMax = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] > ma)
            {
                ma = a[i];
                cntMax = 1;
            }
            else if (a[i] == ma)
            {
                cntMax++;
            }
            mi = min(mi, a[i]);
        }

        int diff = ma - mi;

        if (diff > k + 1)
        {
            cout << "Jerry\n";
        }
        else if (diff == k + 1 && cntMax > 1)
        {
            cout << "Jerry\n";
        }
        else
        {
            cout << ((sum & 1) ? "Tom\n" : "Jerry\n");
        }
    }
    return 0;
}
