#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a<=b){
        cnt++;
        a=a*3;
        b=b*2;
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}