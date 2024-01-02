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
        int d[n];
        for(int i=0; i<n; i++){
            cin>>d[i];
        }
        int a[n];
        a[0]=d[0];
        bool flag=false;
        for(int i=1; i<n; i++){
            if(a[i-1]+d[i]>=0 && a[i-1]-d[i]>=0 && d[i]!=0){
                flag=true;
                break;
            }
            a[i]=a[i-1]+d[i];
        }
        if(flag){
            cout<<(-1)<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
                a[i]=0;
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}