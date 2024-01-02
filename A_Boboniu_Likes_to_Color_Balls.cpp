#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool check(int r,int g,int b,int w){
    if((r%2 + b%2 + g%2 + w%2) >1){
        return false;
    }
    else{
        return true;
    }
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        if(r==0 && g==0 && b==0 && w==0){
            cout<<"Yes"<<endl;
        }
        else if(check(r,g,b,w)){
            cout<<"Yes"<<endl;
        }
        else if(r>0 && b>0 && g>0 && check(r-1,g-1,b-1,w+1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    fastio()
    return 0;
}