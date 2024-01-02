#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int begin = 0;
    while (m-- > 0)
    {
        char dir;
        int d;
        cin >> dir >> d;
        if (dir == 'C')
        {
            begin = (begin + d) % n;
        }
        else if (dir == 'A')
        {
            begin = (begin + (n - d)) % n;
        }
        else
        {
            cout << arr[(begin + d - 1) % n] << endl;
        }
    }
    fastio() return 0;
}