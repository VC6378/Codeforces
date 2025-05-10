#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long l,r;
        cin>>l>>r;
        r-=l;
        long long left = 2;
        long long right = 1e9;
        while(left<right){
            long long mid = (left+right)/2;
            if(mid*(mid-1)/2 <= r){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        cout<<left-1<<endl;
    }
    fastio()
    return 0;
}