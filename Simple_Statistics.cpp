#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        double sum = 0.000000;
        for(int i=k; i<n-k; i++){
            sum+=arr[i];
        }
        cout<<fixed<<setprecision(6)<<sum/(n-(2*k))<<endl;
    }
    fastio()
    return 0;
}