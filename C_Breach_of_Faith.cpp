#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t; 

    while (t--)
    {
        long long n;
        cin >> n; 

        vector<long long> b(2 * n); 
        for (long long i = 0; i < 2 * n; i++)
        {
            cin >> b[i]; 
        }

        sort(b.begin(), b.end()); 

        vector<long long> a(2 * n + 1, 0); 

        for (long long i = 0; i <= n; i++)
        {
            a[2 * i] = b[n + i - 1];
        }

        for (long long i = 0; i < n - 1; i++)
        {
            a[2 * i + 1] = b[i];
        }

        long long sum_large = 0, sum_small = 0;
        for (long long i = n - 1; i < 2 * n; i++)
        {
            sum_large += b[i];
        }
        for (long long i = 0; i < n - 1; i++)
        {
            sum_small += b[i];
        }
        a[2 * n - 1] = sum_large - sum_small;

        for (long long i = 0; i < 2 * n+1; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
