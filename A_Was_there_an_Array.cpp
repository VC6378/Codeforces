#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool check(vector<int> &vec)
{
    int n=vec.size();
    for (int i = 0; i < n - 2; i++)
    {
        if (vec[i] == 1 && vec[i + 1] == 0 && vec[i + 2] == 1)
            return false;
    }
    return true;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; i++)
        {
            cin >> b[i];
        }
        if (check(b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
     return 0;
}