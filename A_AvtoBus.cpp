#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        if(n==4){
            cout<<1<<" "<<1<<endl;
        }
        else if(n&1 || n<=3){
            cout<<(-1)<<endl;
        }
        else{
            long long int ans4,ans6;
            n=n/2;
            if(n%2==0){
                ans4=n/2;
            }
            else{
                ans4=(n/2);
            }
            if(n%3==0){
                ans6=n/3;
            }
            else{
                ans6=(n/3)+1;
            }

            cout<<ans6<<" "<<ans4<<endl;


        }
    }
    fastio()
   return 0;
}