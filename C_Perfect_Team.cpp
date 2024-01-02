#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long q;
    cin>>q;
    while(q-->0){
        long long c,m,x;
        cin>>c>>m>>x;
        long long start = 0;
        long long end = min(c,m);
        long long ans=-1;
        while(start<=end){
            long long mid = start+(end-start)/2;
            if(c+m+x>=3*mid){
                start=mid+1;
                ans=mid;
            }
            else{
                end=mid-1;
            }
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}