#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int l,r;
    cin>>l>>r;
    long long int a,b,c;
    cin>>a>>b>>c;
    bool flag=true;
    if(r==l+1){
        flag=false;
    }
    else if(r==l){
        flag=false;
    }
    else{
        if(l%2==0){
            if((r>=l+1) && (r>=l+2)){
                a=l;
                b=l+1;
                c=l+2;
            }
            else{
                flag=false;
            }
        }
        else{
            l=l+1;
            if((r>=l+1) && (r>=l+2)){
                a=l;
                b=l+1;
                c=l+2;
            }
            else{
                flag=false;
            }
        }
    }

    if(flag){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
        cout<<(-1)<<endl;
    }
    fastio()
    return 0;
}