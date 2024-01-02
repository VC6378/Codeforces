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
        int codeidx ;
        int chefidx;

        for(int i=0; i<n; i++){
            if((s[i]=='c')&&(s[i+1]=='o')&&(s[i+2]=='d')&&(s[i+3]=='e')){
                codeidx = i;
                break;
            }
        }

        for(int i=0; i<n; i++){
            if((s[i]=='c')&&(s[i+1]=='h')&&(s[i+2]=='e')&&(s[i+3]=='f')){
                chefidx = i;
                break;
            }
        }

        if(codeidx<chefidx){
            cout<<"AC"<<endl;
        }
        else{
            cout<<"WA"<<endl;
        }
    }
    fastio()
    return 0;
}