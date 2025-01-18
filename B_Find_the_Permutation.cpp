#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<int> hehe(vector<string> &graph, int n)
{
    vector<vector<int>> adj(n);
    vector<int> indegree(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == '1')
            {
                adj[i].push_back(j);
                indegree[j]++;
            }
        }
    }

    priority_queue<int> q;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int u = q.top();
        q.pop();
        result.push_back(u + 1);

        for (int v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    return result;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<string> graph(n);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            graph[i] = s;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (graph[i][j] == '1' && i < j)
                {
                    graph[j][i] = '0';
                }
            }
        }

        vector<int> ans = hehe(graph, n);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout<<graph[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    fastio() return 0;
}