#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin >> n;
    long long int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    long long int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    vector<long long int> vec1;
    vector<long long int> vec2;
    vector<long long int> vec3;

    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == 1)
        {
            vec1.push_back(arr1[i]);
        }
        else if (arr2[i] == 2)
        {
            vec2.push_back(arr1[i]);
        }
        else if (arr2[i] == 3)
        {
            vec3.push_back(arr1[i]);
        }
    }

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    sort(vec3.begin(), vec3.end());

    if ((vec1[0] + vec2[0]) >= vec3[0])
    {
        cout << vec3[0] << endl;
    }
    else
    {
        cout << (vec1[0] + vec2[0]) << endl;
    }
    fastio() return 0;
}