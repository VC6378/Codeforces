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
        bool flag=true;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                flag = !flag;
            }
            else{
                flag=!flag;
                break;
            }
        }

        if(flag==false){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    fastio()
    return 0;
}