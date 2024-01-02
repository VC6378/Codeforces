#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string a;
        string b;
        cin>>a;
        cin>>b;
        unordered_map<char,int>aa;
        unordered_map<char,int>bb;
        for(int i=0; i<a.size(); i++){
            aa[a[i]]++;
        }
        for(int i=0; i<b.size(); i++){
            bb[b[i]]++;
        }
        int cnt = 0;
        for(auto x:aa){
            for(auto y:bb){
                if(x.first==y.first){
                    if(x.second>y.second){
                        cnt+=y.second;
                    }
                    else{
                        cnt+=x.second;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}