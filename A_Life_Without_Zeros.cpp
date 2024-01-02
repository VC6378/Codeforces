#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int a,b;
    cin>>a>>b;
    int c = a+b;
    string aa = to_string(a);
    string bb = to_string(b);
    string cc = to_string(c);
    string newa="";
    string newb="";
    string newc="";
    for(int i=0; i<aa.size(); i++){
        if(aa[i]=='0'){
            continue;
        }
        else{
            newa+=aa[i];
        }
    }

    for(int i=0; i<bb.size(); i++){
        if(bb[i]=='0'){
            continue;
        }
        else{
            newb+=bb[i];
        }
    }

    for(int i=0; i<cc.size(); i++){
        if(cc[i]=='0'){
            continue;
        }
        else{
            newc+=cc[i];
        }
    }

    int inta = stoi(newa);
    int intb = stoi(newb);
    int intc = stoi(newc);
    int summ = inta+intb;
    if(summ==intc){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    fastio()
    return 0;
}