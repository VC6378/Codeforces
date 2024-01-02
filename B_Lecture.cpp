#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<string,string>p;
    while(m-->0){
        string a,b;
        cin>>a>>b;
        p[a]=b;
    }
    vector<string> vec;
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        vec.push_back(x);
    }

    vector<string> ans;
    for(int i=0; i<n; i++){
        for(auto x:p){
            if(vec[i]==x.first){
                if(x.first.size()>x.second.size()){
                    ans.push_back(x.second);
                }
                else{
                    ans.push_back(x.first);
                }
            }
        }
    }

    for(int x=0; x<ans.size(); x++){
        cout<<ans[x]<<" ";
    }
    cout<<endl;
    fastio()
    return 0;
}