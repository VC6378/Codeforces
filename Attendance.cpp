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
        string firstName[n];
        string secondName[n];
        for(int i=0; i<n; i++){
            cin>>firstName[i]>>secondName[i];
        }
        unordered_map<string,int>names;
        for(int i=0; i<n; i++){
            names[firstName[i]]++;
        }
        for(int i=0; i<n; i++){
            if(names[firstName[i]]==1){
                cout<<firstName[i]<<endl;
            }
            else{
                cout<<firstName[i]<<" "<<secondName[i]<<endl;
            }
        }
    }
    fastio()
    return 0;
}