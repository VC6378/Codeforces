#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        long long int n = s.size();
        long long int cnt = 0;
        for(long long int i=0; i<n; i++){
            string sk = s.substr(i,4);
            sort(sk.begin(),sk.end());
            if(sk=="cefh"){
                cnt++;
            }
        }
        if(cnt>0){
            cout<<"lovely "<<cnt<<endl;
        }
        else{
            cout<<"normal"<<endl;
        }
    }
    fastio()
    return 0;
}