#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> tree;
vector<int> permutation;
int st, en;

void bfs(int n)
{
    vector<int> parent(n + 1, -1);
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(st);
    visited[st] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        permutation.push_back(node);

        for (int neighbor : tree[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }

    if (permutation.back() != en)
    {
        cout << "-1\n";
        return;
    }

    for (int val : permutation)
    {
        cout << val << " ";
    }
    cout << "\n";
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> st >> en;

        tree.assign(n + 1, vector<int>());
        permutation.clear();

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        bfs(n);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
