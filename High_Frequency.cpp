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
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }

        unordered_map<long long int,long long int> mp;
        for(long long int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        vector<long long int> vec;
        for(auto x:mp){
            vec.push_back(x.second);
        }
        sort(vec.begin(),vec.end());
        long long int sk = vec.size();
        long long int l = vec[sk-1];
        vec[sk-1] = l-l/2;
        sort(vec.begin(),vec.end());

        cout<<vec[sk-1]<<endl;
    }
    fastio()
    return 0;
}