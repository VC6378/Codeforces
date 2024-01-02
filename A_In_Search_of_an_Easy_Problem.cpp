#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    int cntzero=0;
    for(int i=0; i<n; i++){
        cin>>vec[i];
        if(vec[i]==0){
            cntzero++;
        }
    }

    if(cntzero==n){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
    fastio()
    return 0;
}