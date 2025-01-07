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
        int cnt=0;
        for(int i=1;i<=100;i++){
            for(int j=1;j<=100;j++){
                if(i+j==n){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}