#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        unordered_map<int,int> ans;
        for(int i=0; i<n; i++){
            ans[arr[i]]++;
        }
        int cntr=0;
        int cntl=0;
        for(int i=0; i<n; i++){
            if((arr[i]==i+1) && (ans[arr[i]]>=k)){
                cntr++;
            }
        }
        for(auto i: ans){
            if(i.second>=k){
                cntl++;
            }
        }
        cout<<cntl-cntr<<endl;
    }
    fastio()
    return 0;
}