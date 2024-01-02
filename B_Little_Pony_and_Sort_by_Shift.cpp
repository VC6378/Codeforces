#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int cnt=0;
    int address=0;
    for(int i=0; i<n-1; i++){
        if(vec[i]>vec[i+1]){
            address=i;
            cnt++;
        }
    }
    if(vec[n-1]>vec[0]){
        cnt++;
        address=n-1;
    }

    if(cnt==0) cout<<0<<endl;
    else if(cnt>1) cout<<(-1)<<endl;
    else cout<<n-address-1<<endl;
    fastio()
    return 0;
}