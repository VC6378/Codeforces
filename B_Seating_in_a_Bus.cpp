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
        vector<long long> a(n);
        unordered_map<long long,bool> mp;
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        mp[a[0]]=true;
        bool flag = true;
        for(long long ind=1;ind<n;ind++){
            long long i = a[ind];
            if(mp[i+1] || mp[i-1]){
                mp[i]=true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}