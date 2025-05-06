#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

ll max_subarray_sum(const vector<ll> &arr, const string &s)
{
    ll max_sum = LLONG_MIN, curr = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (s[i] == '1')
        {
            curr += arr[i];
            max_sum = max(max_sum, curr);
            if (curr < 0)
                curr = 0;
        }
        else
        {
            curr = 0;
        }
    }
    return max(0LL, max_sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Step 1: Compute max subarray sum of knowns
        ll max_known = LLONG_MIN, curr = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                curr += a[i];
                max_known = max(max_known, curr);
                if (curr < 0)
                    curr = 0;
            }
            else
            {
                curr = 0;
            }
        }
        if (max_known == LLONG_MIN)
            max_known = 0;

        if (max_known > k)
        {
            cout << "No\n";
            continue;
        }
        if (max_known == k)
        {
            cout << "Yes\n";
            for (int i = 0; i < n; ++i)
            {
                if (s[i] == '1')
                    cout << a[i] << " ";
                else
                    cout << -INF << " ";
            }
            cout << "\n";
            continue;
        }

        // Precompute left suffix max and right prefix max
        vector<ll> left_suffix(n + 1, 0), right_prefix(n + 1, 0);
        ll curr_left = 0, max_left = 0;
        for (int i = 0; i < n; ++i)
        {
            left_suffix[i] = max_left;
            if (s[i] == '1')
            {
                curr_left = max(a[i], curr_left + a[i]);
                max_left = max(max_left, curr_left);
            }
            else
            {
                curr_left = 0;
            }
        }
        left_suffix[n] = max_left;

        ll curr_right = 0, max_right = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            right_prefix[i] = max_right;
            if (s[i] == '1')
            {
                curr_right = max(a[i], curr_right + a[i]);
                max_right = max(max_right, curr_right);
            }
            else
            {
                curr_right = 0;
            }
        }

        bool found = false;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                ll left = left_suffix[i];
                ll right = right_prefix[i + 1];
                ll x = k - left - right;
                // Place x at position i, -INF elsewhere
                vector<ll> candidate = a;
                for (int j = 0; j < n; ++j)
                {
                    if (s[j] == '0')
                        candidate[j] = -INF;
                }
                candidate[i] = x;
                // Check if this gives max subarray sum k
                if (max_subarray_sum(candidate, string(n, '1')) == k)
                {
                    cout << "Yes\n";
                    for (int j = 0; j < n; ++j)
                    {
                        if (s[j] == '1')
                            cout << a[j] << " ";
                        else if (j == i)
                            cout << x << " ";
                        else
                            cout << -INF << " ";
                    }
                    cout << "\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            cout << "No\n";
    }
    return 0;
}
