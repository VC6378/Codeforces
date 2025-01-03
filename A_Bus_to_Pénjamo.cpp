#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        vector<int> arr(n);
        int leftalone = 0;
        int happy = 0;
        for (int k = 0; k < n; k++)
        {
            cin >> arr[k];
            happy += (arr[k] / 2) * 2;
            r -= arr[k] / 2;
            leftalone += arr[k] % 2;
        }
        if (leftalone > r)
            happy += r * 2 - leftalone;
        else
            happy += leftalone;
        cout << happy << endl;
    }
}