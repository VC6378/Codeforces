#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int x,y,k,n;
        cin>>x>>y>>k>>n;
        long long int pleft = x-y;
        long long int p,c;
        bool finalAns = 0;
        while(n-->0){
            cin>>p>>c;
            if((k>=c) && (p>=pleft)){
                finalAns = 1;
                // break;
            }
        }
        if(finalAns){
            cout<<"LuckyChef"<<endl;
        }
        else{
            cout<<"UnluckyChef"<<endl;
        }
    }
    fastio()
    return 0;
}