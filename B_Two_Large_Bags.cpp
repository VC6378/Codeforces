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
        vector<int> vec(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mp[vec[i]]++;
        }
        for(int i=1;i<n;i++){
            if(mp[i]>2){
                mp[i+1]+=mp[i]-2;
                mp[i]=2;
            }
        }

        bool flag = true;
        for(int i=1;i<=n;i++){
            if(mp[i]&1){
                flag=false;
                break;
            }
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    fastio()
    return 0;
}