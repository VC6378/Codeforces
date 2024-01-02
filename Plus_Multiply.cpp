#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long int cnttwo = 0;
        long long int cntzero = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==2){
                cnttwo++;
            }
            else if(arr[i]==0){
                cntzero++;
            }
        }
        int ans = 0;
        if(cnttwo>0){
            ans+=cnttwo*(cnttwo-1)/2;
        }
        if(cntzero>0){
            ans+=cntzero*(cntzero-1)/2;
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}