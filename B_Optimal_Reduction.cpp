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
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        //find if the given array is of the mountain form or not
        int preLen=1;
        int surLen=1;
        while(preLen<n && arr[preLen+1]>=arr[preLen]){
            preLen++;
        }
        while(surLen<n && arr[n-surLen]>=arr[n-surLen+1]){
            surLen++;
        }
        if(preLen+surLen>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}