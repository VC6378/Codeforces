#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n-->0){
        vector<int> vec(3);
        int cntones=0;
        for(int i=0; i<3; i++){
            cin>>vec[i];
            if(vec[i]==1){
                cntones++;
            }
        }
        if(cntones>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
    fastio()
    return 0;
}