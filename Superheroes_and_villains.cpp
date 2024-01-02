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
        long long int n;
        cin >> n;
        long long int super = 0;
        long long int villans = 0;
        bool ans = 0;
        while (n-- > 0)
        {
            string s;
            cin >> s;
            long long int ssize = s.size();
            if ((ssize > 3) && (s[ssize - 3] == 'm') && (s[ssize - 2] == 'a') && (s[ssize - 1] == 'n'))
            {
                super++;
            }
            else
            {
                villans++;
            }

            if (((super > villans) && (super - villans >= 2)))
            {
                cout << "superheroes" << endl;
                ans = 1;
                break;
            }
            else if (((villans > super) && (villans - super >= 3)))
            {
                cout << "villains" << endl;
                ans = 1;
                break;
            }
        }
        if (!ans)
        {
            cout << "draw" << endl;
        }
    }
    fastio() return 0;
}