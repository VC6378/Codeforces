#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


long long hehe(long long n,long long m,vector<pair<long long,long long>> &moves){
    set<pair<long long,long long>> colored;
    long long currx=0;
    long long curry=0;
    for(auto it:moves){
        currx+=it.first;
        curry+=it.second;

        for (long long i = 0; i < m; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                colored.insert({currx + i, curry + j});
            }
        }
    }

    long long perimeter = 0;
    const long long dx[] = {0, 0, 1, -1};
    const long long dy[] = {1, -1, 0, 0};

    for (const auto &point : colored)
    {
        for (long long i = 0; i < 4; i++)
        {
            pair<long long, long long> adj = {point.first + dx[i], point.second + dy[i]};
            if (colored.find(adj) == colored.end())
            {
                perimeter++;
            }
        }
    }

    return perimeter;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        vector<pair<long long,long long>> moves(n);
        for(long long i=0;i<n;i++){
            cin>>moves[i].first>>moves[i].second;
        }
        cout<<hehe(n,m,moves)<<endl;
    }
    fastio()
    return 0;
}