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
        vector<long long> arr(n);
        long long sum=0;
        long long neg=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                neg++;
                arr[i]=-arr[i];
            }
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
        if(neg&1){
            sum-=2*arr[0];
        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}