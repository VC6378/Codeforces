#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int countPrimeFactors(int n)
{
    int count = 0;
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }

    for (int i = 3; i <= n; i += 2)
    {
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
    }

    return count;
}

int32_t main()
{
    int t;
    cin>>t;
    vector<int> n(t);
    for(int i=0; i<t; i++){
        cin>>n[i];
    }
    for(int i=0; i<t; i++){
        int x = n[i];
        cout<<countPrimeFactors(x) << " ";
        cout << endl;
    }
    fastio()
    return 0;
}