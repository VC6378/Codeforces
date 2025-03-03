#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{

    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        vector<int> vec(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mp[vec[i]]++;
        }
        int maxfreq=-1;
        int maxele=-1;
        for(auto it:mp){
            if(it.second>maxfreq){
                maxfreq = it.second;
                maxele = it.first;
            }
        }

        if(x==1){
            cout<<maxele<<endl;
        }
        else{
            unordered_map<int,int> fmp;
            unordered_map<int,int> hehe;
            for(int i=0;i<n;i++){
                hehe[vec[i]]--;
                hehe[x*vec[i]]++;
                fmp[vec[i]] = max(hehe[vec[i]],fmp[vec[i]]);
                fmp[x*vec[i]] = max(hehe[x*vec[i]],fmp[x*vec[i]]);
            }

            int maxi=0;
            for(auto it:mp){
                maxi = max(maxi,it.second+fmp[it.first]);
            }
            cout<<maxi<<endl;
        }
    }

    fastio()
    return 0;
}