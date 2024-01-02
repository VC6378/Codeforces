#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int g,c;
        cin>>g>>c;
        cout<<((c*c)/(2*g))<<endl;
    }
    fastio()
    return 0;
}