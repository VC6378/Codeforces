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
        int x = 0;
        int y = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1){
                x++;
            }
            else{
                y++;
            }
        }
	    if(x==y || x-y==1 || (x-y==2 && x%2==0) || y-x==1 || (y-x==2 && x%2==0)){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
        
    }
    fastio()
    return 0;
}