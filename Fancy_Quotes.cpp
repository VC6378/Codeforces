#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t-->0){
        string arr[101];
        for(int i=0; i<101; i++){
            cin>>arr[i];
        }
        bool ans = 0;
        for(int i=0; i<101; i++){
            if(arr[i]=="not"){
                ans =1;
                break;
            }
        }
        if(ans){
            cout<<"Real Fancy"<<endl;
    }
        else{
            cout<<"regularly fancy"<<endl;
        }
    }
    fastio()
    return 0;
}