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
    vector<pair<int,int>>pp;
    for(int i=0; i<n; i++){
        pair<int,int> p;
        if(i==0){
            int mini = abs(arr[0]-arr[1]);
            int maxi=abs(arr[0]-arr[n-1]);
            p.first=mini;
            p.second=maxi;
            pp.push_back(p);
        }
        else if(i==n-1){
            int mini = abs(arr[n-2]-arr[n-1]);
            int maxi = abs(arr[n-1]-arr[0]);
            p.first=mini;
            p.second=maxi;
            pp.push_back(p);
        }
        else{
            int mini = min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
            int maxi = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
            p.first=mini;
            p.second=maxi;
            pp.push_back(p);
        }
    }

    for(auto x:pp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    fastio()
    return 0;
}