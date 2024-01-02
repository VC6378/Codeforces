#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int cnt=0;
    while(n-->0){
        string s;
        cin>>s;
        if(s[0]=='+'){
            cnt++;
        }
        if(s[0]=='-'){
            cnt--;
        }
        if(s[2]=='+'){
            cnt++;
        }
        if(s[2]=='-'){
            cnt--;
        }
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}