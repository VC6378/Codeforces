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
        vector<int> vc(n);
        for(int i=0; i<n; i++){
            cin>>vc[i];
        }
        sort(vc.begin(),vc.end());
        bool onepres = false;
        for(int i=0; i<n; i++){
            if(vc[i]==1){
                onepres=true;
                break;
            }
        }

        bool consec=false;
        for(int i=0; i<n-1; i++){
            if(vc[i]+1==vc[i+1]){
                consec=true;
                break;
            }
        }

        // cout<<"hehe"<<endl;

        if(onepres&&consec){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    fastio()
    return 0;
}