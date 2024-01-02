#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int A[n+5] = {0};
        for(int i=0; i<5; i++){
            A[i] = 751;
        }
        for(int i=5; i<n+5; i++){
            cin>>A[i];
        }
        int cnt = 0;
        for(int i=5; i<n+5; i++){
            if((A[i]<A[i-1]) && (A[i]<A[i-2]) && (A[i]<A[i-3]) && (A[i]<A[i-4]) && (A[i]<A[i-5])){
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    fastio()
    return 0;
}