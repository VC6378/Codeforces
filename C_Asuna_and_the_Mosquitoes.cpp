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
        long long sum=0;
        long long cnt=0;
        for(long long i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]&1) cnt++;
            sum+=vec[i];
        }

        if(cnt==0 or cnt==n){
            cout<<(*max_element(vec.begin(),vec.end()))<<endl;
        }
        else{
            cout<<sum-cnt+1<<endl;
        }

    }
    fastio()
    return 0;
}