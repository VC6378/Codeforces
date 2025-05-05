#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s_input;
        cin >> s_input;
        vector<int> s;
        for (char c : s_input)
        {
            s.push_back(c - '0');
        }

        int n = s.size();
        int m;
        cin >> m;

        string l, r;
        cin >> l >> r;

        int mx = 0;
        for (int i = 0; i < m; ++i)
        {
            int li = l[i] - '0';
            int ri = r[i] - '0';
            int nmx = mx;
            for (int c = li; c <= ri; ++c)
            {
                int cur = mx;
                while (cur < n && s[cur] != c)
                {
                    ++cur;
                }
                nmx = max(nmx, cur);
            }
            mx = nmx + 1;
        }

        cout << (mx > n ? "YES" : "NO") << endl;
    }

    return 0;
}
