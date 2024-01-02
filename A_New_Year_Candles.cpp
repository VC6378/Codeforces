#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a,b;
    cin>>a>>b;
    int cnt = a;
    while(a>=b){
        int d = a/b;
        cnt+=d;
        int remain = a%b;
        a = d+remain;
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}