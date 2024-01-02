#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int maxfreq = -1;
        for(auto x:mp){
            maxfreq=max(maxfreq,x.second);
        }
        if(maxfreq==1){
            cout<<4<<endl;
        }
        else if(maxfreq==2){
            cout<<4<<endl;
        }
        else if(maxfreq==3){
            cout<<6<<endl;
        }
        else if(maxfreq==4){
            cout<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}