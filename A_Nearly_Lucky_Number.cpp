#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n;
    cin>>n;
    long long int cnt=0;
    while(n!=0){
        if((n%10==4) || (n%10==7)){
            cnt++;
        }
        n=n/10;
    }

    if(cnt==4 || cnt==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}