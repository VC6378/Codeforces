#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s,t;
        cin>>s>>t;
        int ssize=s.size();
        int tsize=t.size();
        string stemp="";
        string ttemp="";
        int g = __gcd(ssize,tsize);
        int lcm = (ssize*tsize)/g;
        for(int i=0; i<lcm/ssize; i++){
            stemp+=s;
        }
        for(int i=0; i<lcm/tsize; i++){
            ttemp+=t;
        }
        if(stemp==ttemp){
            cout<<stemp<<endl;
        }
        else{
            cout<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}