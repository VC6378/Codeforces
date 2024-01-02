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
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            for(int j=arr[i]-i; j<=n; j+=arr[i]){
                if(j>=0){
                    if(((arr[i]*1ll*arr[j]) == (i+j)) && i<j){
                        cnt++;
                    }
                }
            }
        }

        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}