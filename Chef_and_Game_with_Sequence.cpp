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
        int sumOdd = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                sumOdd++;
            }
        }
        if(n==1){
            cout<<1<<endl;
        }
        else{
            if(sumOdd%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
    fastio()
    return 0;
}