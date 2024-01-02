#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0; i<n; i++){
        cin>>v[i];
    }
    long long i=0;
    long long j=n-1;
    long long leftsum=0;
    long long rightsum=0;
    long long maxsum=0;
    while(i<j){
        if(i==0 and j==n-1){
            leftsum+=v[0];
            rightsum+=v[n-1];
        }
        if(leftsum==rightsum){
            maxsum=max(leftsum,rightsum);
            leftsum+=v[++i];
            rightsum+=v[--j];
        }
        else if(leftsum>rightsum){
            rightsum+=v[--j];
        }
        else{
            leftsum+=v[++i];
        }
    }
    cout<<maxsum<<endl;
    fastio()
    return 0;
}