#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int s,w1,w2,w3;
        cin>>s>>w1>>w2>>w3;
        if((w1==w2)&&(w2==w3)&&(w3==w1)){
            if(s>=(w1*3)){
                cout<<1<<endl;
            }
            else if((s>=(w1*2)) && (s<w1*3)){
                cout<<2<<endl;
            }
            else{
                cout<<3<<endl;
            }
        }
        else{
            int begin = w1+w2;
            int full = w1+w2+w3;
            int end = w2+w3;

            if(s>=full){
                cout<<1<<endl;
            }
            else if(((s>=begin) &&( s<full))||((s>=end) && (s<full))){
                cout<<2<<endl;
            }
            else{
                cout<<3<<endl;
            }
        }

    }
    fastio()
    return 0;
}