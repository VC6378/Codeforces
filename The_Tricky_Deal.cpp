#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin >> t;
    while (t-- > 0)
    {
        long long int a;
        cin >> a;
        long long int received = a;
        long long int given = 1;
        long long int maxP = a - 1;
        long long int d = 1;
        long long int i = 1;
        long long int dMax = 1;
        while (received > given)
        {
            if (received == given)
            {
                break;
            }
            else
            {
                if (received - given > maxP)
                {
                    maxP = received - given;
                    dMax = i;
                }
                i++;
                d++;
                received += a;
                given += pow(2, i - 1);
            }
        }

        cout << d - 1 << " " << dMax << endl;
    }
    fastio() return 0;
}