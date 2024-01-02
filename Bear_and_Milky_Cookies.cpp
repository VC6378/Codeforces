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
        string arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int cookie = 0;
        int together = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == "cookie"){
                cookie++;
            }
        }
        for(int i=0; i<n-1; i++){
            if((arr[i]=="cookie") && (arr[i+1]=="milk")){
                together++;
            }
        }

        if(cookie==together){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}