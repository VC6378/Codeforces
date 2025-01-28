#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        if(a1==0){
            cout<<1<<endl;
        }
        else{
            cout<<a1+min(a3,a2)*2+min(a1+1,abs(a2-a3)+a4)<<endl;
        }
    }
    fastio()
    return 0;
}