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
        long long int n;
        cin >> n;
        long long int a[n];
        long long int b[n];
        long long int suma = 0;
        long long int sumb = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            suma+=a[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumb+=b[i];
        }

        long long int diff = 0;
        for(long long int i = 0; i < n; i++){
            diff += abs(a[i] - b[i]);
        }

        if(suma==sumb){
            cout<<diff/2<<endl;
        }
        else{
            cout<<(-1)<<endl;
        }
    }
    fastio() return 0;
}