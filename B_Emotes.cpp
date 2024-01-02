#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int alpha;
        cin>>alpha;
        arr.push_back(alpha);
    }
    sort(arr.begin(),arr.end());
    int x = arr[n-1];
    int y = arr[n-2];
    cout << m / (k + 1) * 1ll * (x * 1ll * k + y) + m % (k + 1) * 1ll * x << endl;
    fastio()
    return 0;
}