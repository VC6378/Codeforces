#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,x;
    cin>>n>>x;
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(x%i==0){
            if(x/i<=n){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}