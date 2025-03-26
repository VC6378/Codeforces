#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


const long long N = 1e7 + 1; 
vector<bool> is_prime(N, true);

void sieve(long long N)
{
    is_prime[0] = is_prime[1] = false; 
    for (long long i = 2; i * i < N; i++)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int32_t main()
{

    long long t;
    cin>>t;
    vector<long long> ns;
    long long maxi = INT_MIN;
    while(t-->0){
        long long n;
        cin>>n;
        ns.push_back(n);
        maxi = max(maxi,n);
    } 

    sieve(maxi+1);  
    for(auto n:ns){
        long long ans = 0;
        for (long long i = 2; i <= n; i++)
        {
            if (is_prime[i])
            {
                ans += (n / i);
            }
        }
        cout<<ans<<endl;
    }

    fastio()
    return 0;
}