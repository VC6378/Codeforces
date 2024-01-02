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
    int anton=0;
    int danik=0;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            anton++;
        }
        else if(s[i]=='D'){
            danik++;
        }
    }

    if(anton>danik){
        cout<<"Anton"<<endl;
    }
    else if(danik>anton){
        cout<<"Danik"<<endl;
    }
    else if(anton==danik){
        cout<<"Friendship"<<endl;
    }
    fastio()
    return 0;
}