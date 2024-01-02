#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,c;
        cin>>n>>c;
        int a[n];
        int sum = 0;
        for(int i=0;i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(c>=sum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    fastio()
    return 0;
}