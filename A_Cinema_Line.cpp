#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool ans=true;
    if(arr[0]==25){
        int cnt25=0;
        int cnt50=0;
        for(int i=0; i<n; i++){
            if(arr[i]==25){
                cnt25++;
            }
            else if(arr[i]==50){
                cnt50++;
                cnt25=cnt25-1;
            }
            else if(arr[i]==100){
                if(cnt50>0 && cnt25>0){
                    cnt50--;
                    cnt25--;
                }
                else{
                    cnt25=cnt25-3;
                }
            } 

            if(cnt25<0){
                ans=false;
                break;
            }
        }

    }
    else{
        // cout<<"NO"<<endl;
        ans=false;
    }

    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}