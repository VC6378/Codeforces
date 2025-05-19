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
        vector<pair<long long,long long>> v;
        for(long long i=0;i<n;i++){
            cin>>vec[i];
            v.push_back({abs(vec[i]),i});
        }
        sort(v.begin(),v.end());
        long long cnt = 0;
        for(long long i=0;i<n;i++){
            if(v[i].second ==0){
                break;
            }
            cnt++;
        }
        if(cnt>(n/2)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    fastio()
    return 0;
}