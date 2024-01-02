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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = INT_MIN;

        //when all the elements are included
        for(int i=0; i<n; i++){
            ans = max(ans,(arr[(i-1+n)%n]-arr[i]));
        }

        //first one is not included
        for(int i=1; i<n; i++){
            ans = max(ans,(arr[i]-arr[0]));
        }

        //last one is not included
        for(int i=0; i<n-1; i++){
            ans = max(ans,(arr[n-1]-arr[i]));
        }

        //outputing ans
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}