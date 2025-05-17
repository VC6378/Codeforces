#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio();
    int tests;
    cin >> tests;
    while (tests--)
    {
        long long n;
        cin >> n;
        string res;

        cout << "mul 9" << endl;
        cout.flush();
        cin >> res;
        if (res == "-1")
            continue;

        long long add_val = n - 9;
        if (add_val < 0)
            add_val = 0;
        cout << "add " << add_val << endl;
        cout.flush();
        cin >> res;
        if (res == "-1")
            continue;

        cout << "digit" << endl;
        cout.flush();
        cin >> res;
        if (res == "-1")
            continue;

        cout << "!" << endl;
        cout.flush();
        cin >> res;
        if (res == "-1")
            continue;
    }

    return 0;
}
