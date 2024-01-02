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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int numberdishes = 0;
        if (a <= b)
        {
            numberdishes += a;
            b = b - a;
        }
        if (c <= b)
        {
            numberdishes += c;
        }
        if (b < c)
        {
            numberdishes += b;
        }
        if(numberdishes>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio() return 0;
}