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
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        bool flag = true;
        if (n == 1)
            flag = true;

        else
        {
            for (int i = n - 1; i >= 0; i -= 2)
            {
                if (vec[i] < vec[i - 1])
                {
                    swap(vec[i], vec[i - 1]);
                }
            }

            for (int i = 0; i < n - 1; i++)
            {
                if (vec[i] > vec[i + 1])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    fastio() return 0;
}