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
        int n;
        cin >> n;
        vector<int> v;
        v.push_back(0);
        int y = 1;
        while (y < n)
        {
            if (count(v.begin(), v.end(), v[v.size() - 1]) == 1)
            {
                v.push_back(0);
            }
            else{
                vector<int> v2 = {v[v.size()-1]};
                auto it = find_end(v.begin(),v.end()-1,v2.begin(),v2.end());
                int z=it-v.begin();
                v.push_back(y-z);
            }

            y++;
        }
        cout<<count(v.begin(),v.end(),v[n-1])<<endl;
    }
    fastio() return 0;
}