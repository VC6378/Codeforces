#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long int x,y;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                x = i;
            }
            if(arr[i]==n){
                y = i;
            }
        }
        if(x<y){
            cout<<x+(n-y-1)<<endl;
        }
        else if(x>y){
            cout<<x+n-1-y-1<<endl;
        }
        else if(n==0){
            cout<<0<<endl;
        }

    }
    fastio()
    return 0;
}