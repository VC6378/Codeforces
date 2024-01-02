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
        int max = 0;
        int impress;
        for(int i=0; i<n-k+1; i++){
            impress = 0;
            for(int j = i; j<i+k; j++){
                impress +=arr[j];
            }
            if(impress>max){
                max = impress;
            }
        }

        cout<<max<<endl;
    }
    fastio()
    return 0;
}