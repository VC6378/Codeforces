#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool f(vector<long long> &vec,long long n,long long x,long long sum,long long ind){
    if(ind==n){
        if(sum==x) return true;
        else return false;
    }
    if(f(vec,n,x,sum+vec[ind],ind+1)) return true;
    if(f(vec,n,x,sum-vec[ind],ind+1)) return true;
    return false;
}

int32_t main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long> vec(n);
    for(long long i=0;i<n;i++){
        cin>>vec[i];
    }
    if(f(vec,n,x,vec[0],1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}