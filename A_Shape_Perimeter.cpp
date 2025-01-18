#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void hehe()
{
    int n, m;
    cin >> n >> m;

    vector<int> x(n), y(n);
    int curr_x = 0, curr_y = 0;
    vector<pair<int, int>> positions;

    for (int i = 0; i < n; i++)
    {
        int dx, dy;
        cin >> dx >> dy;

        curr_x += dx;
        curr_y += dy;

        positions.emplace_back(curr_x, curr_y);
    }

    int min_x = positions[0].first, max_x = positions[0].first;
    int min_y = positions[0].second, max_y = positions[0].second;

    for (auto [x, y] : positions)
    {
        min_x = min(min_x, x);
        max_x = max(max_x, x);
        min_y = min(min_y, y);
        max_y = max(max_y, y);
    }

    int width = max_x - min_x + m;
    int height = max_y - min_y + m;

    int perimeter = 2 * (width + height);

    cout << perimeter << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        hehe();
    }

    return 0;
}
