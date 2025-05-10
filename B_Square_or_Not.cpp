#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long cnt = 0;
        while (cnt < n && s[cnt] == '1')
        {
            cnt++;
        }
        if (cnt == n)
        {
            if (n == 4)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            if ((cnt - 1) * (cnt - 1) == n)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    fastio()
    return 0;
}