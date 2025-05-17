#include <bits/stdc++.h>
using namespace std;

int factorial(int x)
{
    int result = 1;
    for (int i = 2; i <= x; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        n = min(n, 7); 
        int fact_n = factorial(n);

        string repeated = string(fact_n, '0' + k);

        for (int i = 1; i < 10; i += 2)
        {
            int mod = 0;
            for (char c : repeated)
            {
                mod = (mod * 10 + (c - '0')) % i;
            }
            if (mod == 0)
            {
                cout << i << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
