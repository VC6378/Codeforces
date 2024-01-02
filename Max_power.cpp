#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag = 0;
    int cnt = 0;
    for(int i=s.size()-1; i>0; i--){
        if(s[i]=='0'){
            cnt++;
        }
        else{
            flag = 1;
            break;
        }
    }

    if(flag){
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}