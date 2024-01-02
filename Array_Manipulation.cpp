#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const int N=1e+7;
long long int arr[N];

int32_t main()
{
    int n,m;
    cin>>n>>m;
    while(m-->0){
        int a,b,d;
        cin>>a>>b>>d;
        arr[a] = arr[a]+d;
        arr[b+1] = arr[b+1]-d;
    }
    for(int i=1; i<=n; i++){
        arr[i] += arr[i-1];
    }
    long long int maxi = -1;
    for(int i=1; i<=n; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<maxi<<endl;
    fastio()
    return 0;
}