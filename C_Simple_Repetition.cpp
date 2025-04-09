#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long x)
{
    if (x < 2)
        return false;
    if (x == 2 || x == 3)
        return true;
    if (x % 2 == 0 || x % 3 == 0)
        return false;
    for (long long i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }
    return true;
}

bool check(long long x, long long k)
{
    if (k == 1)
        return is_prime(x);
    return (x == 1 && k == 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x, k;
        cin >> x >> k;
        cout << (check(x, k) ? "YES" : "NO") << "\n";
    }
    return 0;
}
