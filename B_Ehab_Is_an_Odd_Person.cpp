#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    bool flag = false;
    int cntodds=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]&1){
            flag=true;
            cntodds++;
        }
    }
    vector<int> temp = arr;
    sort(temp.begin(),temp.end());

    if(flag && cntodds==n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else if(flag){
        for(int i=0; i<n; i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    

    fastio()
    return 0;
}