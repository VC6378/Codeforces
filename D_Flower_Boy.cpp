#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long solve(vector<long long> &a,vector<long long> &b,long long n,long long m){
    vector<long long> preffix(m + 1, n);
    preffix[0] = -1;

    long long j = 0;
    for (long long i = 0; i < n && j < m; ++i)
    {
        if (a[i] >= b[j])
        {
            preffix[j + 1] = i; 
            ++j;            
        }
    }

    j = m - 1;
    vector<long long> suffix(m + 1, -1);
    suffix[m] = n; 
    for (long long i = n - 1; i >= 0 && j >= 0; --i)
    {
        if (a[i] >= b[j])
        {
            suffix[j] = i; 
            --j;        
        }
    }

   long long ans = INT_MAX;
        for (long long i = 1; i <= m; ++i) {
            if (preffix[i - 1] < suffix[i]) {
                ans = min(ans, b[i - 1]);  
            }
        }


    return ans;
}

bool check(const vector<long long> &a, const vector<long long> &b)
{
    long long j = 0;
    for (long long i = 0; i < (long long)a.size(); ++i)
    {
        if (j < (long long)b.size() && a[i] >= b[j])
        {
            ++j;
        }
    }
    return j == (long long)b.size();
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        vector<long long> a(n),b(m);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<m;i++){
            cin>>b[i];
        }
        if (check(a, b))
        {
            cout << 0 <<endl;
        }

        else{
            long long ans = solve(a, b, n, m);
            if (ans!=INT_MAX)
            {
                cout << ans <<endl;
            }
            else
            {
                cout << -1 <<endl;
            }
        }

    }
    fastio()
    return 0;
}