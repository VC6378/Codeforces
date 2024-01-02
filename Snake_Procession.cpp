#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int h=0;
        int t = 0;
        int isValid = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='.'){
                continue;
            }
            else if(s[i]=='H'){
                h++;
            }
            else if(s[i]=='T'){
                t++;
            }

            if((h-t)>1 || (h-t)<0){
                isValid= -1;
                break;
            }
        }
        if(h!=t){
            isValid=-1;
        }

        if(isValid==0){
            cout<<"Valid"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }

    }
    fastio()
    return 0;
}