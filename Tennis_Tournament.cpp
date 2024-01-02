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
        if(n%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==j){
                        cout<<0;
                    }
                    else if(i>j){
                        if((i-j)%2==0){
                            cout<<0;
                        }
                        else{
                            cout<<1;
                        }
                    }
                    else{
                        if((i-j)%2==0){
                            cout<<1;
                        }
                        else{
                            cout<<0;
                        }
                    }
                }
                cout<<endl;
            }
        }
    }
    fastio()
    return 0;
}