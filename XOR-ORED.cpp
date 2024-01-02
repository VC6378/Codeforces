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
        int a=arr[0];
        for(int i=1; i<n; i++){
            a=a&arr[i];
        }
        int sum=0;
        sum=arr[0]^a;
        for(int i=1; i<n; i++){
            sum |= (arr[i]^a);
        }

        cout<<a<<" "<<sum<<endl;
    }
    fastio()
    return 0;
}