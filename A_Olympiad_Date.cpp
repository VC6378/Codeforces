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
        vector<long long> vec(n);
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }
        long long freq[10]={};
        long long ans =0;
        for(long long i=0;i<n;i++){
            freq[vec[i]]++;
            if(freq[0]>=3 && freq[1]>=1 && freq[2]>=2 && freq[3]>=1 && freq[5]>=1){
                ans=i+1;
                break;
            } 
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}