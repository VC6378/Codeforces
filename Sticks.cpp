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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        vector<int>vec;
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                vec.push_back(arr[i]);
                i++;
            }
        }
        int size = vec.size();
        if(size<2){
            cout<<(-1)<<endl;
        }
        else{
            cout<<(vec[size-1]*vec[size-2])<<endl;
        }
    }
    fastio()
    return 0;
}