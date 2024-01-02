#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
      int x;
      cin>>x;
      int sum=0,last=9;
      vector<int> ans;
      while(sum<x && last>0){
        ans.push_back((min((x-sum),last)));
        sum+=last;
        last--;
      }  
      if(sum<x){
        cout<<(-1)<<endl;
      }
      else{
        reverse(ans.begin(),ans.end());
        for(auto i:ans){
            cout<<i;
        }
        cout<<endl;
      }
    }
    fastio()
    return 0;
}