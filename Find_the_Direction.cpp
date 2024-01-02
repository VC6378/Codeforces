#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x;
        cin>>x;
        int remain = x%4;
        if(remain==0){
            cout<<"North"<<endl;
        }
        else if(remain==1){
            cout<<"East"<<endl;
        }
        else if(remain==2){
            cout<<"South"<<endl;
        }
        else{
            cout<<"West"<<endl;
        }
    }
    fastio()
    return 0;
}