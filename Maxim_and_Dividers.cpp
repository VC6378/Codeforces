#include <bits/stdc++.h>
using namespace std;

//Speed

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool check(long long int n){
    while(n>0){
        if((n%10==4) || (n%10==7)){
            return true;
        }
        n = n/10;
    }
    return false;
}

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int cnt = 0;
        for(long long int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                if(check(i)){
                    cnt++;
                }
                if((i*i!=n) && (check(n/i))){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;

    }
    fastio()
    return 0;
}