#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int arr[n];
        unordered_map<long long int,long long int> mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        long long int maxFreq = -1;
        for(auto x:mp){
            maxFreq = max(maxFreq,x.second);
        }
        cout<<ceil(log2(maxFreq))<<endl;

    }
    fastio()
    return 0;
}