#include <bits/stdc++.h>
using namespace std;


class DSU
{
    vector<int> par, rnk;

public:
    DSU(int n)
    {
        par.resize(n + 1);
        rnk.resize(n + 1, 1);
        make_set(n);
    }

    void make_set(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            par[i] = i;
            rnk[i] = 1;
        }
    }

    int find_set(int x)
    {
        if (par[x] == x)
        {
            return x;
        }
        return par[x] = find_set(par[x]);
    }

    void union_set(int a, int b)
    {
        int p1 = find_set(a);
        int p2 = find_set(b);
        if (p1 == p2)
            return;

        if (p1 <= p2)
        {
            par[p2] = p1;
            rnk[p1] += rnk[p2];
        }
        else
        {
            par[p1] = p2;
            rnk[p2] += rnk[p1];
        }
    }
};

void solve()
{
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<pair<int, int>> edges;
    for (int i = 0; i < m1; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    vector<pair<int, int>> edges1;
    for (int i = 0; i < m2; i++)
    {
        int u, v;
        cin >> u >> v;
        edges1.push_back({u, v});
    }
    DSU g(n + 3);
    for (int i = 0; i < m2; i++)
    {
        int u, v;
        u = edges1[i].first;
        v = edges1[i].second;
        if (g.find_set(u) == g.find_set(v))
            continue;
        g.union_set(u, v);
    }
    int ans = 0;
    DSU fa(n + 3);
    for (auto &ele : edges)
    {
        int u = ele.first;
        int v = ele.second;
        if (g.find_set(u) != g.find_set(v))
            ans++;
        else
            fa.union_set(u, v);
    }
    vector<vector<int>> par(n + 1);
    for (int i = 1; i <= n; i++)
    {
        par[g.find_set(i)].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        for (auto ch : par[i])
        {
            if (fa.find_set(ch) != i)
            {
                ans++;
                fa.union_set(ch, i);
            }
        }
    }
    cout << ans << endl;

}

int main(){
    int t;
    cin>>t; 
    while(t-->0){
        solve();
    }
}