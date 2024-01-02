#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        vector<long long> arr;
        for(long long i=0; i<n; i++){
            long long x;
            cin>>x;
            arr.push_back(x);
        }
        for(long long i=0; i<m; i++){
            long long x;
            cin>>x;
            arr.push_back(x);
        }
        // cout<<arr.size()<</
        sort(arr.begin(),arr.end()-1);
        reverse(arr.begin(),arr.end());
        long long sum=0;
        for(long long i=0; i<n; i++){
            sum+=arr[i];
        }

        cout<<sum<<endl;
    }
    fastio()
    return 0;
}