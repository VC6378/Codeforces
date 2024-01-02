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
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool flag = 0;
        for(long long int i=0; i<n-1; i++){
            if(__gcd(arr[i],arr[i+1])==1){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<n<<endl;
        }
        else{
            long long int minn = 10000000000;
            for(long long int i=0; i<n; i++){
                if(__gcd(arr[0],arr[i])<minn){
                    minn = __gcd(arr[0],arr[i]);
                }
            }
            cout<<n*minn<<endl;
        }
    }
    fastio()
    return 0;
}