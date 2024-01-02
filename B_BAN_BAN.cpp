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
        int len = n*3;
        if(n&1){
            cout<<(n/2)+1<<endl;
            int start=1;
            int end=len;
            while(start<=end){
                cout<<start<<" "<<end<<endl;
                start+=3;
                end-=3;
            }
        }
        else{
            cout<<(n/2)<<endl;
            int start=1;
            int end=len;
            while(start<=end){
                cout<<start<<" "<<end<<endl;
                start+=3;
                end-=3;
            }
        }
    }
    fastio()
    return 0;
}