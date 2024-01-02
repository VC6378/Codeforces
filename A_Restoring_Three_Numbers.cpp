#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    ans.push_back(d);
    sort(ans.begin(),ans.end());
    int maxi = ans[3];
    cout<<maxi-ans[0]<<" "<<maxi-ans[1]<<" "<<maxi-ans[2]<<endl;
    fastio()
    return 0;
}