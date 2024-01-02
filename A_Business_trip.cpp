#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int k;
    cin>>k;
    int arr[12];
    for(int i=0; i<12; i++){
        cin>>arr[i];
    }
    int summa=0;
    for(int i=0; i<12; i++){
        summa+=arr[i];
    }
    if(summa>=k){
         sort(arr,arr+12);
        int cnt=0;
        int sum=0;
        for(int i=11; i>=0; i--){
            if(sum<k){
            cnt++;
            }
        sum+=arr[i];
    }
    cout<<cnt<<endl;
    }
    else{
        cout<<(-1)<<endl;
    }
    fastio()
    return 0;
}