#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int m,y,x;
        cin>>m>>y>>x;
        int arr[m];
        for(int i=0; i<m; i++){
            cin>>arr[i];
        }
        bool presentCops[200]={0};
        for(int j=0; j<m; j++){
            for(int i = arr[j]; i<=arr[j]+(x*y)&&i<=100; i++){
                presentCops[i-1] = 1;
            }
            for(int i = arr[j]; i>=arr[j]-(x*y)&&i>=0; i--){
                presentCops[i-1] = 1;
            }
        }
        int available = 0;
        for(int i=0; i<100; i++){
            if(presentCops[i]==0){
                available++;
            }
        }
        cout<<available<<endl;
    }
    fastio()
    return 0;
}