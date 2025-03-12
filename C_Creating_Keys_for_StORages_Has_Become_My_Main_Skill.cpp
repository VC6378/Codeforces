#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

string decToBinary(long long n)
{
    string bin = "";

    while (n > 0)
    {
        long long bit = n % 2;
        bin.push_back('0' + bit);
        n /= 2;
    }

    reverse(bin.begin(), bin.end());
    return bin;
}

int32_t main()
{
    long long t;
    cin >> t;
    while (t-- > 0)
    {
        long long n, x;
        cin >> n >> x;
        string binary = decToBinary(x);
        // cout<<binary<<endl;
        long long len = binary.length();
        long long right = 0;
        for (long long i = len - 1; i >= 0; i--)
        {
            if (binary[i] == '1')
            {
                right++;
            }
            else
            {
                break;
            }
        }
        vector<long long> ans;
        long long ans_or = 0;
        long long start = 0;

        long long limit = (1 << (right))-1; // 2^right-1 // 3
        // cout<<"limit"<<limit<<endl;
        for (long long i = 0; i <= min(n-1, limit); i++)
        {
            ans_or = ans_or | i;
            ans.push_back(i);
        }
        if (ans_or != x && ans.size()==n)
        {
            ans.pop_back();
            ans.push_back(x);
        }
        while (ans.size() < n)
        {
            ans.push_back(x);
        }

        for (long long i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    fastio() return 0;
}


n=9
x=11

x=1011

0 1 2 3 11 11 11 11 11 === 11