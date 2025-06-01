#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool checkLucky(long long n){
    long long remain;
    while(n!=0){
        remain = n%10;
        if(remain!=4 && remain!=7){
            return false;
            break;
        }
        n=n/10;
    }
    return true;
}

int32_t main()
{
    long long n;
    cin>>n;
    bool ans=0;
    for(long long i=1; i<=n; i++){
        if(checkLucky(i)){
            if(n%i==0){
                ans=1;
                break;
            }
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}