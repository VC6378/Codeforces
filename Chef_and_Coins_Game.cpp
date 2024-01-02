#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        if(n%6==0){
            cout<<"Misha"<<endl;
        }
        else{
            cout<<"Chef"<<endl;
        }
    }
    fastio()
    return 0;
}