#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,b,d;
    cin>>n>>b>>d;
    vector<int> vec(n+1);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int sum=0;
    int ans=0;
    for(int i=0; i<n; i++){
        if(vec[i]<=b){
            sum+=vec[i];
        }
        if(sum>d){
            ans++;
            sum=0;
        }
    }
    cout<<ans<<endl;
    fastio()
    return 0;
}