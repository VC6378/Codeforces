#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x,y;
        cin>>x>>y;
        char arr[30];
        for(int i=0; i<30; i++){
            cin>>arr[i];
        }
        int cntone = 0;
        for(int i=0; i<30; i++){
            if(arr[i]=='1'){
                cntone++;
            }
        }
        int cnti = 0;
        int maxx=-1;
        for(int i=0; i<30; i++){
            if(arr[i]=='1' && arr[i+1]=='1'){
                cnti++;
            }
            else{
                cnti = 0;
            }

            
            if(cnti>maxx){
                maxx = cnti;
            }
        }

        cout<<((x*cntone)+(y*maxx))<<endl;
    }
    fastio()
    return 0;
}