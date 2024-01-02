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
        int countones = 0;
        int countzeros = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                countones++;
            }
            else{
                countzeros++;
            }
        }
        if((countones==1) || (countzeros==1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    fastio()
    return 0;
}