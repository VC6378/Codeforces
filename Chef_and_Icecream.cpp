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
        bool ans = true;
        int cof = 0;
        int cot = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==5){
                cof++;
            }
            else if(arr[i]==10){
                if(cof>0){
                    cot++;
                    cof--;
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(arr[i]==15){
                if(cot>0){
                    cot--;
                }
                else if(cof>=2){
                    cot = cof-2;
                }
                else{
                    ans = false;
                    break;
                }
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}