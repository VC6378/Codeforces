#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    while(n-->0){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    
    fastio()
    return 0;
}