#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        string s;
        int start=0;
        int ltime = 0;
        for(int i=0; i<n; i++){
            cin>>s;
            if(s == "START38"){
                start++;
            }
            else if(s == "LTIME108"){
                ltime++;
            }
        }
        cout<<start<<" "<<ltime<<endl;
    }
    return 0;
}