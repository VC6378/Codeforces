#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        
        for(int i=2; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<1<<endl;
    }
    fastio() return 0;
}