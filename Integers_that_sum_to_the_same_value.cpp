#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1; i<=n/2; i++){
        if(i!=(n-i)){
            cnt+=2;
        }
        else{
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}