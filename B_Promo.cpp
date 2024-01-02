#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,q;
    cin>>n>>q;
    vector<long long>p(n+1);
    for(int i=1; i<=n; i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    vector<long long> pff(n+1);
    pff[1]=p[1];
    for(int i=2; i<=n; i++){
        pff[i]=pff[i-1]+p[i];
    }
    while(q-->0){
        int x,y;
        cin>>x>>y;
        cout<<pff[n-x+y]-pff[n-x]<<endl;
    }
    fastio()
    return 0;
}