#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    int cnt=0;
    int start=0;
    int end =s.size()-1;
    while(start<=end){
        if(s[start]!=s[end]){
            cnt++;
        }
        start++;
        end--;
    }
    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else if(cnt==0){
        if(s.size()%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}