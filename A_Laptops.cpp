#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    pair<int,int> hehe[n];
    for(int i=0; i<n; i++){
        cin>>hehe[i].first>>hehe[i].second;
    }
    sort(hehe,hehe+n);
    for(int i=0; i<n-1; i++){
        if(hehe[i].first<hehe[i+1].first && hehe[i].second>hehe[i+1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }

    cout<<"Poor Alex"<<endl;
    fastio()
    return 0;
}