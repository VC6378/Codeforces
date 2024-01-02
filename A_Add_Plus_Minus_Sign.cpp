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
        string a;
        string ans="";
        cin>>a;
        int sum=a[0]-'0';
        for(int i=1; i<n; i++){
            if(sum==0){
                ans+='+';
                sum+=a[i]-'0';
            }
            else{
                ans+='-';
                sum-=a[i]-'0';
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}