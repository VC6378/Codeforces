#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }
        set<long long int> uk;
        for(long long int i=0; i<n; i++){
            uk.insert(arr[i]);
        }
        cout<<uk.size()<<endl;
    }

    fastio()
    return 0;
}