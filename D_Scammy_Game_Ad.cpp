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
        vector<pair<char,char>> operation;
        vector<pair<int,int>> values;
        for(int i=0;i<n;i++){
            char op1;
            char op2;
            int val1;
            int val2;
            cin>>op1>>val1>>op2>>val2;
            operation.push_back({op1,op2});
            values.push_back({val1,val2});
        }

        
    }
    fastio()
    return 0;
}