#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long hehe(long long x, long long y, long long n)
{
    if (n == 2)
    {
        if (x == 0 && y == 0)
            return 1;
        if (x == 1 && y == 1)
            return 2;
        if (x == 1 && y == 0)
            return 3;
        return 4;
    }
    long long half = n / 2;
    long long blksize = (n * n) / 4;
    if (x < half && y < half)
        return hehe(x, y, half);
    if (x >= half && y >= half)
        return hehe(x - half, y - half, half) + blksize;
    if (x >= half)
        return hehe(x - half, y, half) + 2 * blksize;
    return hehe(x, y - half, half) + 3 * blksize;
}

pair<long long, long long> hihi(long long d, long long n)
{
    if (n == 2)
    {
        if (d == 1)
            return {1, 1};
        if (d == 2)
            return {2, 2};
        if (d == 3)
            return {2, 1};
        return {1, 2};
    }
    long long half = n / 2;
    long long blksize = (n * n) / 4;
    if (d <= blksize)
        return hihi(d, half);
    if (d <= 2 * blksize)
    {
        auto p = hihi(d - blksize, half);
        return {p.first + half, p.second + half};
    }
    if (d <= 3 * blksize)
    {
        auto p = hihi(d - 2 * blksize, half);
        return {p.first + half, p.second};
    }
    auto p = hihi(d - 3 * blksize, half);
    return {p.first, p.second + half};
}

int32_t main()
{
    long long t;
    cin >> t;
    while (t-- > 0)
    {
        long long n;
        cin >> n;
        long long q;
        cin >> q;
        n = (1<<n);
        while (q--)
        {
            string type;
            cin >> type;
            if (type == "->")
            {
                long long x, y;
                cin >> x >> y;
                cout << hehe(x - 1, y - 1, n) << '\n';
            }
            else
            {
                long long d;
                cin >> d;
                auto p = hihi(d, n);
                cout << p.first << " " << p.second << '\n';
            }
        }
    }
    fastio() return 0;
}