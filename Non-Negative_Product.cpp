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
        bool zeroPresence = false;
        int cntNeg = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==0){
                zeroPresence = true;
            }
            if(arr[i]<0){
                cntNeg++;
            }
        }

        if(zeroPresence){
            cout<<0<<endl;
        }
        else{
            if(cntNeg>0){
                if(cntNeg&1){
                    cout<<1<<endl;
                }
                else{
                    cout<<0<<endl;
                }
            }
            else{
                cout<<0<<endl;
            }
        }


    }
    fastio()
    return 0;
}