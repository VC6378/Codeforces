#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else{
            int diff = abs(a-b);
            int tens = diff/10;
            // cout<<tens<<endl;
            int remain = diff%10;
            if(remain==0){
                cout<<tens<<endl;
            }
            else{
                cout<<tens+1<<endl;
            }
            
        }
    }
    fastio()
    return 0;
}