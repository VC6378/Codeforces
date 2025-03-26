#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool check(long long maxrowstogether, long long totalRows,long long cols,long long k)
{
    if (maxrowstogether >= totalRows)
        return totalRows;
    long long partitions = (totalRows + 1) / (maxrowstogether + 1);
    long long option1 = min(partitions * maxrowstogether, totalRows - partitions + 1);
    long long nextPartitions = partitions + 1;
    long long option2 = 0;
    if (nextPartitions <= totalRows + 1)
    {
        option2 = min(nextPartitions * maxrowstogether, totalRows - nextPartitions + 1);
    }
    long long maxi = max(option1, option2);
    if(maxi*cols>=k){
        return true;
    }
    return false;
}

int32_t main()
{
    long long t;
    cin >> t;
    while (t-- > 0)
    {
        long long n, m, k;
        cin >> n >> m >> k;
        long long start = 0;
        long long end = m;
        long long ans = m;
        while (start <= end)
        {
            long long mid = start + (end - start) / 2;
            if (check(mid,m,n,k))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << ans << endl;
    }
    fastio() return 0;
}