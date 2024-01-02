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
        vector<long long int> arr;
        for(long long int i=0; i<n; i++){
            long long int a;
            cin>>a;
            arr.push_back(a);
        }

        bool ans = true;
        for(long long int i=1; i<=n; i++){
            if(arr[i-1]!=i){
                if((i%arr[i-1]) !=0)
                ans = false;
                break;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}