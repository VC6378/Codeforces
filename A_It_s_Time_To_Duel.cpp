#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        bool check = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];

            if (i > 0 && a[i] == 0 && a[i - 1] == 0)
            {
                check = true;
            }
        }

        if (sum > n - 1 || check)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
