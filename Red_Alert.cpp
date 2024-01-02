#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,d,h;
        cin>>n>>d>>h;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        bool ans = 0;
        int rain = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                rain+=arr[i];
                if(rain>h){
                    ans = 1;
                    break;
                }
            }
            else{
                if(rain<d){
                    rain = 0;
                }
                else{
                    rain = rain-d;
                }
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}