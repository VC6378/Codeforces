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
        int cnt = 0;
        int div = arr[0];
        if(arr[0]==1){
            cout<<0<<endl;
        }
        else{
            for(int i=1; i<n; i++){
                if((arr[i]%div==0)){
                    cnt++;
                }
            }
            if(cnt == n-1){
                cout<<(-1)<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        
    }
    fastio()
    return 0;
}