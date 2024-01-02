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
        int cnt1=0;
        int cnt0=0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
        if(cnt0>=n/2){
            cout<<cnt0<<endl;
            for(int i=0; i<cnt0; i++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<cnt1-cnt1%2<<endl;
            for(int i=0; i<cnt1-cnt1%2 ; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}