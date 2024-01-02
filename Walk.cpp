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
        int vel = -1;
        int ans;
        for(int i=0; i<n; i++){
            ans = arr[i]+i;
            if(ans>vel){
                vel = ans;
            }
        }
        cout<<vel<<endl;
    }
    fastio()
    return 0;
}