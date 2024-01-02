#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string first;
    string second;
    cin>>first>>second;
    for(int i=0; i<first.length(); i++){
        first[i] = tolower(first[i]);
        second[i] = tolower(second[i]);
    } 
    if(first==second){
        cout<<0<<endl;
    }
    else if(first>second){
        cout<<1<<endl;
    }
    else{
        cout<<(-1)<<endl;
    }
    fastio()
    return 0;
}