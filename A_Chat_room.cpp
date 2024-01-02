#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool isSubsequence(string s,string check){
    int j=0;
    for(int i=0; i<s.size(); i++){
        if(check[j]==s[i]){
            j++;
        }
    }

    if(j==check.size()){
        return true;
    }
    else{
        return false;
    }
}

int32_t main()
{

    string s;
    cin>>s;
    string check = "hello";
    if(isSubsequence(s,check)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}