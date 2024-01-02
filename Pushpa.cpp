#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }

        vector<int> vec;
        for(auto x:mp){
            vec.push_back(x.first+x.second-1);
        }

        sort(vec.begin(),vec.end());
        cout<<vec[vec.size()-1]<<endl;
    }
    fastio()
    return 0;
}