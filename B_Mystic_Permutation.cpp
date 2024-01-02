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
        vector<int> p(n + 1);
        vector<int> temp(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            temp[i] = i;
        }
        if (n == 1)
        {
            cout << (-1) << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (p[i] == temp[i])
                {
                    swap(temp[i], temp[i + 1]);
                }
            }
            if (temp[n] == p[n])
            {
                swap(temp[n], temp[n - 1]);
            }
            for (int i = 1; i <= n; i++)
            {
                cout << temp[i] << " ";
            }
            cout<<endl;
        }
    }
    fastio() return 0;
}