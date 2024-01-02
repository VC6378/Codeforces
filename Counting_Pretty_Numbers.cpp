#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int l,r;
        cin>>l>>r;
        long long int cnt = 0;
        for(int i=l; i<=r; i++){
            if((i%10 == 2) || (i%10 == 3) || (i%10==9)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}