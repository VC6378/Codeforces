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
        string name[n];
        char point[n];
        map<string,int>votes;
        for(int i=0; i<n; i++){
            cin>>name[i]>>point[i];
            votes[name[i]] = point[i];
        }
        int cnt = 0;
        for(auto x:votes){
            if(x.second=='+'){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}