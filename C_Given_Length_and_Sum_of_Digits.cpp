#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<string, string> findSmallestAndLargest(int m, int s)
{
    if ((s == 0 && m > 1) || (s > 9 * m))
    {
        return {"-1", "-1"}; 
    }

    string largest = "";
    int sum = s;
    for (int i = 0; i < m; ++i)
    {
        int digit = min(9, sum);
        largest += (digit + '0');
        sum -= digit;
    }

    string smallest = largest;
    reverse(smallest.begin(), smallest.end());

    if (smallest[0] == '0')
    {
        for (int i = 1; i < m; ++i)
        {
            if (smallest[i] > '0')
            {
                smallest[i]--;
                smallest[0] = '1';
                break;
            }
        }
    }

    return {smallest, largest};
}

int main()
{
    int m, s;
    cin >> m >> s;

    auto result = findSmallestAndLargest(m, s);
    cout << result.first << " " << result.second << endl;

    return 0;
}
