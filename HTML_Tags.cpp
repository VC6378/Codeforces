#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        bool isValid = 1;
        if(s.size()<4){
            isValid = 0;
        }
        if(s[0]!='<'){
            isValid = 0;
        }
        if(s[1]!='/'){
            isValid = 0;
        }
        if(s[s.size()-1]!='>'){
            isValid = 0;
        }
        for(int i=2; i<s.size()-1; i++){
            if(!((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))){
                isValid = 0;
                break;
            }
        }

        if(isValid){
            cout<<"Success"<<endl;
        }
        else{
            cout<<"Error"<<endl;
        }
    }
    fastio()
    return 0;
}