#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        int con = 0;
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                con++;
            }
        }
        cout<<(n-con)<<endl;
    }
    fastio()
    return 0;
}