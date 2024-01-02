#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        double aa[50];
        double bb[50];
        for(int i=0; i<50; i++){
            aa[i] = pow(a,i+1);
            bb[i] = pow(b,i+1);
        }

        bool ans = 0;
        for(int i=0; i<50; i++){
            for(int j=0; j<50; j++){
                if(aa[i]==bb[j]){
                    ans = 1;
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