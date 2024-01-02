#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int arr[n];
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long int cntBob = 0;
        long long int cntAlice = 0;
        long long int common = 0;
        for(long long int i=0; i<n; i++){
            if(arr[i]%a==0){
                cntBob++;
            }
            else if(arr[i]%b==0){
                cntAlice++;
            }
        }

        for(long long int i=0; i<n; i++){
            if((arr[i]%a==0) || (arr[i]%b)==0){
                common++;
            }
        }

        if(common>0){
            cntBob++;
        }

        if(cntBob>cntAlice){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }
    fastio()
    return 0;
}