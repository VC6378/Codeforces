#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,q;
        cin>>n>>q;
        int arr[n+1];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int forwardArr[n+10];
        int backwardArr[n+10];
        forwardArr[0]=backwardArr[n+1]=0;
        for(int i=1; i<=n; i++){
            forwardArr[i] = __gcd(forwardArr[i-1],arr[i]);
        }
        for(int i=n; i>1; i--){
            backwardArr[i] = __gcd(backwardArr[i+1],arr[i]);
        }

        while(q-->0){
            int l,r;
            cin>>l>>r;
            int g = __gcd(forwardArr[l-1],backwardArr[r+1]);
            cout<<g<<endl;
        }
    }
    fastio()
    return 0;
}