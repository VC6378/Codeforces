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
        int result = 0;
        for(int i=0; i<n; i++){
            int countt = 0;
            for(int j=i+1; j<n; j++){
                if((arr[i]&arr[j]) == arr[i]){
                    countt++;
                }
            }
            result+=countt;
        }

        cout<<result<<endl;
        
    }
    fastio()
    return 0;
}