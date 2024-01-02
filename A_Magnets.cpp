#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int size = n;
    vector<string> v;
    while(n-->0){
        string s;
        cin>>s;
        v.push_back(s);
    }

    int cnt=0;
    for(int i=0; i<size-1; i++){
        if(v[i]!=v[i+1]){
            cnt++;
        }
    }
    cout<<(cnt+1)<<endl;
    fastio()
    return 0;
}