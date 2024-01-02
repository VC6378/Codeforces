#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        string first;
        cin>>first;
        string second;
        cin>>second;
        bool ans = false;
        if(((first[0]=='o') || (second[0]=='o'))&&((first[1]=='b') || (second[1]=='b'))&&((first[2]=='b') || (second[2]=='b'))){
            ans = true;
        }
        else if(((first[0]=='b') || (second[0]=='b'))&&((first[1]=='o') || (second[1]=='o'))&&((first[2]=='b') || (second[2]=='b'))){
            ans = true;
        }
        else if(((first[0]=='b') || (second[0]=='b'))&&((first[1]=='b') || (second[1]=='b'))&&((first[2]=='o') || (second[2]=='o'))){
            ans = true;
        }

        if(ans){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    fastio()
    return 0;
}