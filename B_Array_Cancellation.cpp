#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        // int arr[n];
        long long int currSum=0;
        for(int i=0; i<n; i++){
            long long int x;
            cin>>x;
            currSum = max(0LL,currSum+x);
        }
        cout<<currSum<<endl;

    }
    fastio()
    return 0;
}