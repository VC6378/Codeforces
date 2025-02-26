#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k,p;
        cin>>n>>k>>p;
        int ans=0;
        if(k==0){
            cout<<0<<endl;
        }
        else{
            if((k>(n*p)) or (k<(n*(-p)))){
                cout<<(-1)<<endl;
            }
            else{
                if(k>0){
                    int quo = k/p;
                    ans+=quo;
                    int rem = k-(quo*p);
                    if(rem>0) ans++;
                }
                else{
                    int quo = k/p;
                    ans+=abs(quo);
                    int rem = k-(quo*p);
                    if(rem<0) ans++;
                }
                cout << ans << endl;
            }
           
        }
    }
    fastio()
    return 0;
}