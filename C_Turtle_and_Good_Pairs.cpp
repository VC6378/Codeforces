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

        unordered_map<char,int> mp;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());

        string temp(n,'$');
        int ind=0;
        for(int i=0;i<n;i+=2){
            temp[i]=vec[ind].second;
            vec[ind].first--;
            if(vec[ind].first==0) ind++;
        }

        for(int i=1;i<n;i+=2){
            temp[i]=vec[ind].second;
            vec[ind].first--;
            if(vec[ind].first==0) ind++;
        }

        cout<<temp<<endl;
    }
    fastio()
    return 0;
}