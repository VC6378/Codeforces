#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
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
        sort(vec.begin(), vec.end());
        long long left = n / 2 - 1;
        long long right = (n / 2);
        if (n % 2 == 0)
        {
            while (left >= 0 && right < n)
            {
                cout << vec[right] << " " << vec[left] << " ";
                left--;
                right++;
            }
            cout << endl;
        }
        else{
            while (left >= 0 && right < n)
            {
                cout << vec[right] << " " << vec[left] << " ";
                left--;
                right++;
            }
            cout<<vec[right]<<" ";
            cout << endl;
        }
    }
    fastio() return 0;
}
// heheh
