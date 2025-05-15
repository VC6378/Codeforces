#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class FenwickTree
{
public:
    vector<int> tree;
    int size;

    FenwickTree(int n) : size(n)
    {
        tree.resize(n + 2, 0);
    }

    void update(int index, int value)
    {
        while (index <= size)
        {
            tree[index] += value;
            index += index & -index;
        }
    }

    int query(int index)
    {
        int res = 0;
        while (index > 0)
        {
            res += tree[index];
            index -= index & -index;
        }
        return res;
    }

    int query(int l, int r)
    {
        return query(r) - query(l - 1);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> people(n);
        vector<int> coords;

        for (int i = 0; i < n; ++i)
        {
            int a, b;
            cin >> a >> b;
            people[i] = {a, b};
            coords.push_back(b);
        }

        // Sort by starting point a
        sort(people.begin(), people.end());

        // Coordinate compression for b values
        sort(coords.begin(), coords.end()); 
        coords.erase(unique(coords.begin(), coords.end()), coords.end());

        unordered_map<int, int> b_compressed;
        for (int i = 0; i < coords.size(); ++i)
        {
            b_compressed[coords[i]] = i + 1; // 1-indexed for Fenwick Tree
        }

        FenwickTree bit(coords.size());

        ll greetings = 0;
        for (int i = 0; i < n; ++i)
        {
            int b = people[i].second;
            int compressed_b = b_compressed[b];

            // Count how many bi > current bi have already appeared
            greetings += bit.query(compressed_b + 1, coords.size());
            bit.update(compressed_b, 1);
        }

        cout << greetings << '\n';
    }

    return 0;
}
