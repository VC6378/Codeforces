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
        long long int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ans = false;

        if (k == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (long long int i = 0; i < (n); i++)
            {

                if (s[i] == '*')
                {
                    string ss = s.substr(i, k);
                    if (ss == string(k, '*'))
                    {
                        ans = true;
                        break;
                    }
                    if(ans){
                        break;
                    }
                }
                if(ans){
                    break;
                }
            }

            if (ans)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    fastio() return 0;
}