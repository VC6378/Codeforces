#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        long long int x = pow(10,c-1);
        long long int y = pow(10,c-1);
        while(x<(long long int) pow(10,a-1)){
            x=x*2;
        }
        while(y<(long long int) pow(10,b-1)){
            y=y*3;
        }
        cout<<x<<" "<<y<<endl;
    }
    fastio()
    return 0;
}