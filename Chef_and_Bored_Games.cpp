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
        int cnt = 0;
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                cnt+=(n-i+1)*(n-i+1);
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}