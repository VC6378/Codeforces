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
    int cntones=0;
    int cntzeros=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            cntzeros++;
        }
        else{
            cntones++;
        }
    }
    cout<<abs(cntzeros-cntones)<<endl;
    fastio()
    return 0;
}