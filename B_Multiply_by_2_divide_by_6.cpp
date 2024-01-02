#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int cnt2=0;
        int cnt3=0;
        while(n%2==0){
            n=n/2;
            cnt2++;
        }
        while(n%3==0){
            n=n/3;
            cnt3++;
        }
        if(n==1 && cnt3>=cnt2){
            cout<<2*cnt3-cnt2<<endl;
        }
        else{
            cout<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}