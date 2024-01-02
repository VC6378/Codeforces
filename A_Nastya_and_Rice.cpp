#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int maxg=a+b;
        int ming=a-b;
        int maxt=c+d;
        int mint=c-d;
        int left=n*ming;
        int right=n*maxg;
        if(right < mint || left>maxt){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    fastio()
    return 0;
}