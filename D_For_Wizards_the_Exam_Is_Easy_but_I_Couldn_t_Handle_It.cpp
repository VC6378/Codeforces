#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ans_l=1;
        long long ans_r=1;
        long long curr=INT_MAX;
        for(long long i=0;i<n;i++){
            long long cnt=0;
            for(long long j=i;j<n;j++){
                if(arr[j]>arr[i]) cnt++;
                else if(arr[j]<arr[i]) cnt--;
                if(cnt<curr){
                    curr=cnt;
                    ans_l=i+1;
                    ans_r=j+1;
                }
            }
        }

        cout<<ans_l<<" "<<ans_r<<endl;
    }
    fastio()
    return 0;
}