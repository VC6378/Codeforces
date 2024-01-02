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
        long long int i=0,j=n-1;
        long long int sumfir = 0;
        long long int sumsec = 0;
        while(i<=j){
            if(sumfir<sumsec){
                sumfir+=arr[i];
                i++;
            }
            else{
                sumsec+=arr[j];
                j--;
            }
        }
        cout<<max(sumfir,sumsec)<<endl;
    }
    fastio()
    return 0;
}