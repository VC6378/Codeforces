#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int x;
    cin>>x;
    int remain = x/5;
    if(x%5==0){
        cout<<remain<<endl;
    }
    else{
        cout<<remain+1<<endl;
    }
    fastio()
    return 0;
}