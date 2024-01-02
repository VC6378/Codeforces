#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>vec;
    while(n-->0){
        pair<int,int> hehe;
        int x,y;
        cin>>x>>y;
        hehe.first = x;
        hehe.second = y;
        vec.push_back(hehe);
    }
    sort(vec.begin(),vec.end());
    bool ans = 1;
    for(int i=0; i<vec.size(); i++){
        if(s>vec[i].first){
            s+=vec[i].second;
        }
        else{
            ans=0;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}