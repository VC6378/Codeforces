#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    bool flag = true;
    for(auto x:mp){
        if(x.second>(n+1)/2){
            flag=false;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}