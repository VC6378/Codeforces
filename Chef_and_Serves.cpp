#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int p1,p2,k;
        cin>>p1>>p2>>k;
        int total = p1+p2;
        int res = total/k;
        if(res%2==0){
            cout<<"CHEF"<<endl;
        }
        else{
            cout<<"COOK"<<endl;
        }
    }
    fastio()
    return 0;
}