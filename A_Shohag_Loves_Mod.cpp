#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << 2 * i - 1 << " ";
        }
        cout << endl;
    }

    return 0;
}