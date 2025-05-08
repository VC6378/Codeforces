#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio(); 
    long long t;
    cin >> t;
    while (t-- > 0)
    {
        long long n;
        cin >> n;
        vector<long long> vec(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        string s;
        cin >> s;

        vector<long long> pre(n, 0);
        pre[0] = vec[0];
        for (long long i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + vec[i];
        }

        long long left = 0;
        long long right = n - 1;
        long long ans = 0;

        while (left < right)
        {
            while (left < n && s[left] == 'R')
                left++;
            while (right >= 0 && s[right] == 'L')
                right--;
            if (left < right)
            {
                ans += pre[right] - (left > 0 ? pre[left - 1] : 0);
                left++;
                right--;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
