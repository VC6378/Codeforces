#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n1,n2,m;
        cin>>n1>>n2>>m;
        long long int minn = min(n1,n2);
        minn = min(minn,(m*(m+1))/2);
        cout<<(n1-minn)+(n2-minn)<<endl;
    }
    fastio()
    return 0;
}