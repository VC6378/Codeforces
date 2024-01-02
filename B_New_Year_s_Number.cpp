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
        int k=0;
        bool ans=0;
        while(n>=2020*k){
            if((n-(2020*k))%2021 == 0){
                ans=1;
                break;
            }
            else{
                k++;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    fastio()
    return 0;
}