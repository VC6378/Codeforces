#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            sum+=((i+1)*(s[i]-96));
        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}