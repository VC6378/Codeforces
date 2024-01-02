#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        set<long long int> xx;
        set<long long int> yy;
        while(n-->0){
            long long int x,y;
            cin>>x>>y;
            xx.insert(x);
            yy.insert(y);
        }
        cout<<xx.size()+yy.size()<<endl;
    }
    fastio()
    return 0;
}