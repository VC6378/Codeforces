#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a1,a2;
    cin>>a1>>a2;
    int cnt=0;
    while(a1>0 && a2>0){
        if(a1==1 && a2==1){
            break;
        }
        cnt++;
        if(a1>a2){
            swap(a1,a2);
        }
        a1+=1;
        a2-=2;
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}