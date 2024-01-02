#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while (t-->0){
        int n;
        cin>>n;
        long long int arr[n];
        unordered_map<long long int,long long int> mp;
        long long int maxFreq = -1;
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto x:mp){
            maxFreq = max(maxFreq,x.second);
        }

        if(n<=2){
            cout<<0<<endl;
        }
        else if(maxFreq==1){
            cout<<(n-2)<<endl;
        }
        else{
            cout<<(n-maxFreq)<<endl;
        }
        
    }
    fastio()
    return 0;
}