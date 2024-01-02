#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int countMaxFreq(string s, int n){
    unordered_map<char,int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    int max = -1;
    for(auto x:mp){
        if(x.second>max){
            max = x.second;
        }
    }
    return max;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        int maxx = countMaxFreq(s,s.length());
        if(maxx == s.length()-maxx){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}