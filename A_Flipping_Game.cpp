#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string x;
    cin>>x;
    for(auto &digit:x){
        if(digit>'4'){
            digit = '9'-digit+'0';
        }
    }
    if(x.front()=='0'){
        x.front()='9';
    }
    cout<<x<<endl;
    fastio()
    return 0;
}