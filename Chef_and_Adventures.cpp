#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,m,x,y;
        cin>>n>>m>>x>>y;
        long long int know = n-1;
        long long int power = m-1;
        if((know%x ==0 && power%y==0) || (know!=0 && power!=0 && (know-1)%x==0 && (power-1)%y==0)){
            cout<<"Chefirnemo"<<endl;
        }
        else{
            cout<<"Pofik"<<endl;
        }
    }
    fastio()
    return 0;
}