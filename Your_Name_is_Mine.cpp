#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string m,w;
        cin>>m>>w;
        bool ans = 0;
        int temp = 0;
        if(w==m){
            ans = 1;
        }
        else if(m.size()>w.size()){
            for(int i=0; i<m.size(); i++){
                if(m[i]==w[temp]){
                    temp++;
                }
            }
            if(temp==w.size()){
                ans = 1;
            }
        }
        else if(w.size()>m.size()){
            for(int i=0; i<w.size(); i++){
                if(w[i]==m[temp]){
                    temp++;
                }
            }
            if(temp==m.size()){
                ans = 1;
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