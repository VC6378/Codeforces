#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long n,time;
    cin>>n>>time;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long right = 0;
    long long sum=0;
    long long ans = 0;
    for(long long i=0;i<n;i++){
        while(right<n && sum+a[right]<=time){
            sum+=a[right];
            right++;
        }
        ans = max(ans,right-i);
        sum-=a[i];
    }

    cout<<ans<<endl;

    fastio()
    return 0;
}