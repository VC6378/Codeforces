#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> ans[n];
        for(int i=0; i<n;i++){
            int x;
            cin>>x;
            for(int j=0; j<x; j++){
                int y;
                cin>>y;
                ans[i].push_back(y);
            }
        }


        bool w[50000+5] = {false};
        vector<int> arr;
        for(int i=n-1; i>=0;i--){
            bool flag = false;
            for(auto c:ans[i]){
                if(!flag and !w[c]){
                    flag=true;
                    arr.push_back(c);
                    w[c]=true;
                }
                else{
                    w[c]=true;
                }
            }
        }

        reverse(arr.begin(),arr.end());
        if(arr.size()==n){
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}