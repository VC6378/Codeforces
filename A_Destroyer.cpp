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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mp[vec[i]]++;
        }

        bool flag=true;
        int zf=mp[0];
        for(auto it:mp){
            if(it.second>zf){
                flag=false;
                break;
            }
        }

        if(flag){
            sort(vec.begin(),vec.end());
            for(int i=0;i<n-1;i++){
                if(vec[i]==vec[i+1] or vec[i]+1==vec[i+1]) continue;
                else{
                    flag=false;
                    break;
                }
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    fastio()
    return 0;
}