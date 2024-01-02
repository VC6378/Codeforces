#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool checkLucky(int n){
    int remain;
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
    int n;
    cin>>n;
    bool ans=0;
    for(int i=1; i<=n; i++){
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