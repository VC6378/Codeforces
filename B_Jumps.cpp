#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x;
        cin>>x;
        int curr=0;
        int k=1;
        while(curr<x){
            curr+=k;
            k++;
        }
        if(curr==x+1){
            cout<<k<<endl;
        }
        else{
            cout<<k-1<<endl;
        }
    }
    fastio()
    return 0;
}