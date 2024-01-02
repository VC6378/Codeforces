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
        int arr[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[j][i];
            }
        }
        int ans = 0;
        bool flag = true;
        for(int i =1; i<=n; i++){
            if(arr[i-1][0]!=i){
                if(flag){
                    flag = false;
                    if(i==2){
                        ans = ans+1;
                    }
                    else{
                        ans = ans+2;
                    }
                }
            }
            else{
                flag = true;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}