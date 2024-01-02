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
    int k=0;
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            k++;
        }
        else{
            k--;
        }
        mini = min(k,mini);
        // cout<<mini<<" ";
    }
    // cout<<endl;

    if(k==0 &&(mini<=1 && mini>=-1)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    fastio()
    return 0;
}