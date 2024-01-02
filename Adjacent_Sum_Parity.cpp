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
        int countones = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1){
                countones++;
            }
        }
        if(countones%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    fastio()
    return 0;
}