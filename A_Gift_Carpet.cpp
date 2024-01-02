#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, m;
        cin >> n >> m;
        vector<string> vec;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            vec.push_back(s);
        }
        string str = "vika";
        int cnt = 0;
        set<char> st;
        int ind = 0;
        bool flag = false;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {

                if (vec[i][j] == str[ind] && st.find(j) == st.end())
                {
                    ind++;
                    cnt++;
                    st.insert(j);
                    // cout<<j<<" ";
                }
                if (cnt == 4)
                {
                    flag = true;
                    break;
                }
            }
        }
        // cout<<endl;
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    fastio() return 0;
}