#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        long long num = stoi(s);
        long long sq = ceil(sqrt(num));
        if(sq*sq !=num){
            cout<<-1<<endl;
        }
        else{
            cout<<sq<<" "<<0<<endl;
        }
    }
    fastio()
    return 0;
}