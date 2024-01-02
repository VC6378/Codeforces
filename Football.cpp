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
        int a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            // cin>>b[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        int max = -1;
        for(int i=0; i<n; i++){
            int newScore = 20*(a[i])-10*(b[i]);
            if(newScore>=max){
                max = newScore;
            }
        }
        if(max<0){
            cout<<0<<endl;
        }
        else{
            cout<<max<<endl;
        }
    }
    fastio()
    return 0;
}