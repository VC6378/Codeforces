#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        int mini = min((a+b)/3,min(a,b));
        cout<<mini<<endl;
    }
    fastio()
    return 0;
}