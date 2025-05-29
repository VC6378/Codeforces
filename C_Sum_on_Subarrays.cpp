#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ans(n);
        if (k == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << (-1) << " ";
            }
            cout<<endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (k >= n - i)
                {
                    ans[i] = (1000);
                    k -= (n - i);
                }
                else
                {
                    ans[i] = (k);
                    for (int j = i + 1; j < i + k; j++)
                    {
                        ans[j] = (-1);
                    }
                    for (int j = i + k; j < n; j++)
                    {
                        ans[j] = (-2);
                    }
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}