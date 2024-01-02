#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<int> ans;

bool check(int x,int y){
    bool a=false;
    bool b=false;
    for(auto p:ans){
        if(p==x) a=true;
        if(p==y) b=true;
    }

    return a&b;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x,y;
        cin>>n>>x>>y;
        bool ok=false;
        int mx = 1e9 + 90 ;
        vector<int> v;
        for(int st=1; st<=50; st++){
            for(int diff=1; diff<=50; diff++){
                ans.clear();
                for(int txt=st,cnt=0; cnt<n; cnt++,txt+=diff){
                    ans.push_back(txt);
                }

                if(check(x,y)){
                    ok=true;
                    if(mx>ans.back()){
                        v=ans;
                        mx = ans.back();
                    }
                }
            }
        }

        for(auto p:v){
            cout<<p<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}