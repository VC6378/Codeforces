#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<pair<int,int>> v;
    int one=0;
    int zero=0;
    int j=0;
    for(int i=0; i<n; i++){
        if(a[i]=='1') one++;
        else zero++;
        if(one==zero){
            v.push_back({j,i});
            j=i+1;
            one=0;
            zero=0;
        }
    }

    for(auto i:v){
        int start = i.first;
        int end = i.second;
        if(a[start]==b[start]) continue;
        else{
            for(int j=start; j<=end; j++){
                if(a[j]=='0') a[j]='1';
                else a[j]='0';
            }
        }
    }

    if(a==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

 

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}