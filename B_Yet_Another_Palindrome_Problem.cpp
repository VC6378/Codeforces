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
        bool ans=false;
        for(int i=0; i<n; i++){
            for(int j=i+2; j<n; j++){
                if(arr[i]==arr[j]){
                    ans=true;
                    break;
                }
            }
            if(ans){
                break;
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