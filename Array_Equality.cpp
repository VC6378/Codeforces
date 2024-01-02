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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        unordered_map<long long int,long long int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        long long int maxx = -1;
        for(auto x:mp){
            if(x.second>maxx){
                maxx = x.second;
            }
        }

        if((2*maxx)<=(n+1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    fastio()
    return 0;
}