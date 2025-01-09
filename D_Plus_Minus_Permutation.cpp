
#include <bits/stdc++.h>
using namespace std;
long long t, n, x, y, a, b, c;

long long lcm(long long x,long long y){
    return x*y/__gcd(x,y);
}

int main()
{
    for (cin >> t; t-- and cin >> n >> x >> y;)
    {
        c = n / lcm(x, y);
        a = n - n / x + c;
        b = n / y - c;
        cout << (n * (n + 1) - a * (a + 1) - b * (b + 1)) / 2 << '\n';
    }
}