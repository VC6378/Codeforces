#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int f(int n){
    if(n==1){
        return 1;
    }
    if(n%2==0) return f(n/2)+1;
    else return f(3*n+1)+1;
}

int32_t main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    fastio()
    return 0;
}