#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin >> t;
    while (t-- > 0)
    {
        long long n;
        cin >> n;
        
        if (n % 2 == 0)
        {
            cout << (-1) << endl;
        }
        else
        {
            vector<long long> vec;
            while (n > 1)
            {
                if (((n + 1) / 2) % 2 == 1)
                {
                    vec.push_back(1);
                    n = (n + 1) / 2;
                }
                else
                {
                    vec.push_back(2);
                    n = (n - 1) / 2;
                }
            }

            reverse(vec.begin(),vec.end());
            cout<<vec.size()<<endl;
            for(long long i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;

        }
    }
    fastio() return 0;
}