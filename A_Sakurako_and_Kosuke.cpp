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
        int c=1;
        int x=0;
        while(x>=(-n) && x<=(n)){
            if(c%2==1){
                x-=2*c-1;
            }
            else{
                x+=2*c-1;
            }
            c++;
        }

        if(c%2==1){
            cout<<"Kosuke"<<endl;
        }
        else{
            cout<<"Sakurako"<<endl;
        }
    }
    fastio()
    return 0;
}